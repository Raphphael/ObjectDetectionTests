using System.Linq;
using UnityEngine;
using Visometry.VisionLib.SDK.Core.API;

namespace Visometry.VisionLib.SDK.Core
{
    /// <summary>
    /// Provides events that send the type, log and details each time
    /// an issue from the VisionLib SDK occurred.
    /// </summary>
    /// @ingroup Core
    public class IssuesToEventsAdapter
    {
        private const string defaultString = "XXX";

        private static string[] SplitValues(
            string stringToSplit,
            string separator,
            int expectedValues)
        {
            var separatedStrings = stringToSplit.Split(
                new string[] {separator},
                System.StringSplitOptions.None);

            var result = new string[expectedValues];
            for (int i = 0; i < expectedValues; i++)
            {
                if (i < separatedStrings.Length)
                {
                    result[i] = separatedStrings[i];
                }
                else
                {
                    result[i] = defaultString;
                }
            }
            return result;
        }

        /// <summary>
        ///  Delegate for <see cref="OnIssue"/> events.
        /// </summary>
        public delegate void IssueAction(
            Issue.IssueType issueType,
            string issueLog,
            string issueDetails,
            MonoBehaviour caller);

        /// <summary>
        ///  Event which will send the type, log and details after an issue occurred.
        /// </summary>
        public event IssueAction OnIssue;

        public void RegisterToVLIssues()
        {
            TrackingManager.OnIssueTriggered += EmitIssuesEvent;
        }

        public void UnregisterFromVLIssues()
        {
            TrackingManager.OnIssueTriggered -= EmitIssuesEvent;
        }

        private void EmitIssuesEvent(Issue issue)
        {
            OnIssue?.Invoke(
                GetIssueType(issue),
                GetIssueMessage(issue),
                GetIssueDetails(issue),
                issue.caller);
        }

        private string GetIssueDetails(Issue issue)
        {
            var result = "Details:\nIssue " + issue.code;
            if (issue.message != "")
            {
                result += "\n" + issue.message;
            }
            return result;
        }

        private static string SplitFileNameAndParameters(string fileNameAndParameters)
        {
            var fileNameParametersSplit = fileNameAndParameters.Split(
                new string[] {"?"},
                System.StringSplitOptions.None);

            if (fileNameParametersSplit.Length <= 1)
            {
                return "\"" + fileNameAndParameters + "\"";
            }

            var parameters = fileNameParametersSplit[1].Split(
                new string[] {"&"},
                System.StringSplitOptions.None);

            var returnMessage = "\"" + fileNameParametersSplit[0] + "\"\n\nWith parameters:";

            return parameters.Aggregate(
                returnMessage,
                (current, parameter) => current + ("\n\"" + parameter + "\""));
        }

        public static Issue.IssueType GetIssueType(Issue issue)
        {
            switch(issue.code)
            {
                case 13: /* VL_WARNING_CALIBRATION_DEVICE_ID_OVERWRITTEN_ON_LOAD */
                    return Issue.IssueType.Notification;
                default:
                    return issue.level;
            }
        }

        public static string GetIssueMessage(Issue issue)
        {
            switch (issue.code)
            {
                case 1:
                    return "Internal error occurred";
                case 2:
                    return "No calibration available for device:\n\n\"" + issue.info + "\"";
                case 4:
                    return "No camera found";
                case 5:
                    return "No camera access possible: Camera may be removed, " +
                           "used by another process, or no camera access is granted";
                case 6:
                    return "Unable to acquire an image from the camera: Check the hardware connection to the camera and the currently set parameters.";
                case 10:
                    return "Unable to load camera calibration database:\n\n\"" + issue.info + "\"";
                case 11:
                    return "Unable to parse camera calibration database:\n\n\"" + issue.info + "\"";
                case 12:
                    return "Failed to add camera calibration database:\n\n\"" + issue.info + "\"";
                case 13:
                    return "Camera calibration loading overwrote existing camera calibration for device:\n\n\"" + issue.info + "\"";
                case 14:
                {
                    var deviceIDs = SplitValues(issue.info, "-", 2);
                    return $"Overwriting camera calibration \"{deviceIDs[0]}\" " +
                           $"by alternative ID \"{deviceIDs[1]}\"";
                }
                case 20:
                {
                    var deprecatedParameters = SplitValues(issue.info, "-", 2);
                    return $"Used deprecated parameter \"{deprecatedParameters[0]}\"; " +
                           $"use \"{deprecatedParameters[1]}\" instead";
                }
                case 90:
                {
                    var parameterInformation = SplitValues(issue.info, " :: ", 3);
                    return $"Encountered invalid parameter while loading json file " +
                           $"\"{parameterInformation[0]}\": Parameter " +
                           $"\"{parameterInformation[1]}\"  must have structure " +
                           $"\"{parameterInformation[2]}\"";
                }
                case 95:
                {
                    return "Failed to parse file because of syntax error:\n\n" + issue.info;
                }
                case 96:
                {
                    return "Failed to write into file:\n\n" +
                           SplitFileNameAndParameters(issue.info);
                }
                case 97:
                    return "Permission has not been set:\n\n\"" + issue.info + "\"";
                case 98:
                {
                    return "Failed to load from file:\n\n" + SplitFileNameAndParameters(issue.info);
                }
                case 99:
                    return "File is not valid:\n\n" + SplitFileNameAndParameters(issue.info);
                case 100:
                    return "Can not load file with extension \"" + issue.info +
                           "\". For example only \".json\" and \".vl\" " +
                           "files are allowed for tracking configuration.";
                case 101:
                    return "License file is not valid:\n\n\"" + issue.info + "\"";
                case 102:
                    return "License expired on " + issue.info;
                case 103:
                    return "License runs exceeded; application has been run " + issue.info +
                           " times, but only 5 runs are allowed";
                case 104:
                    return "Unlicensed model found; register your model hash at " +
                           "visionlib.com:\n\n\"" + issue.info + "\"";
                case 105:
                    return "Unlicensed hostID found; register your hostID at " +
                           "visionlib.com:\n\n\"" + issue.info + "\"";
                case 106:
                    return "No license file has been set";
                case 107:
                    return "License can not be used on Platform " + issue.info;
                case 108:
                    return "Models are used which are not registered in the license";
                case 109:
                    return "License file not found:\n\n\"" + issue.info + "\"";
                case 110:
                    return "License only allows versions of VisionLib built before " + issue.info;
                case 111:
                    return "License is bound to a software protection dongle and does not work " +
                           "with the current seat";
                case 112:
                    return "The application uses a feature which is not covered by the current " +
                           "license:\n\n\"" + issue.info + "\"";
                case 113:
                    return "License will expire in " + issue.info + " days";
                case 114:
                    return "Unlicensed bundleID found; Register your bundleID at " +
                           "visionlib.com:\n\n\"" + issue.info + "\"";
                case 115:
                    return "Number of allowed tracking anchors exceeded. Your license allows the " +
                           "simultaneous usage of " + issue.info + " anchors";
                case 116:
                {
                    var schemeInfo = SplitValues(issue.info, " :: ", 2);
                    return $"Unsupported file path scheme: \"{schemeInfo[0]}\".";
                }
                case 200:
                    return "\"" + issue.info + "\" is not supported on your device.";
                case 300:
                    return "Failed to load model:\n\n\"" + issue.info + "\"";
                case 301:
                    return "Failed to decode model\n\n\"" + issue.info + "\"";
                case 302:
                    return "The metric of you model is implausible. Check the " +
                           "`metric` parameter. The bounding box dimensions are: " + issue.info;
                case 303:
                    return "The modelName has already been used or is used twice:\n\n\"" +
                           issue.info + "\"";
                case 304:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 2);
                    return $"The modelID generated by \"{infoParts[0]}\" and " +
                           $" \"{infoParts[1]}\" are identical." +
                           " Change the name of one model.";
                }
                case 350:
                    return "Failed to find poster image:\n\n\"" + issue.info + "\"";
                case 351:
                    return "Poster quality is only " + issue.info +
                           "; use a different poster";
                case 400:
                    return "The setup of the graph failed with an unknown reason";
                case 401:
                    return "Could not find the node with the name " + issue.info;
                case 402:
                    return "The data path doesn't comply with the expected pattern " +
                           "\"nodeName.dataName\":\n\n\"" + issue.info + "\"";
                case 403:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 3);
                    return $"Could not find the input \"{infoParts[1]}\" of the node " +
                           $"\"{infoParts[0]}\"\n\nPossible values: {infoParts[2]}";
                }
                case 404:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 3);
                    return $"Could not find the output \"{infoParts[1]}\" of the node " +
                           $"\"{infoParts[0]}\"\n\nPossible values: {infoParts[2]}";
                }
                case 405:
                    return "There is a cycle in the graph of the tracking configuration," +
                           " so no order of execution could be determined";
                case 406:
                    return "There was no tracker defined inside the tracking configuration";
                case 407:
                    return "The name \"" + issue.info + "\" has been used for two or more devices";
                case 408:
                    return "The name \"" + issue.info + "\" has been used for two or more trackers";
                case 500:
                    return "The name \"" + issue.info + "\" has been used for two or more anchors";
                case 501:
                    return "No anchor with name \"" + issue.info + "\" has been found";
                case 600:
                    return "A required dll is not loaded: \"" + issue.info + "\"";
                case 601:
                    return "Loading of a required dll failed: \"" + issue.info + "\"";
                case 602:
                    return "Could not find a required dll: \"" + issue.info + "\"";
                case 603:
                    return "The version of a required dll is not compatible: \"" + issue.info +
                           "\"";
                case 700:
                    return "The command \"" + issue.commandName + "\" aborted";
                case 701:
                    var extendedMessage = issue.caller == null
                        ? ""
                        : "\nYou may want to deactivate the " + issue.caller.name +
                          " or remove it from the scene.";
                    return $"The command \"{issue.commandName}\" is not supported by the current " +
                           $"pipeline ({issue.info}).\n{extendedMessage}";
                case 702:
                    return "The command \"" + issue.commandName +
                           "\" could not be executed due to internal problems " +
                           "in VisionLib.SDK.Native: " + issue.info;
                case 703:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 2);
                    return $"The command \"{issue.commandName}\" could not be executed because " +
                           $"parameter \"{infoParts[0]}\" did not fit the required structure: " +
                           $"{infoParts[1]}";
                }
                case 704:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 3);
                    return $"The command \"{issue.commandName}\" could not be executed because " +
                           $"\"{infoParts[0]}\" = \"{infoParts[1]}\" is not supported in the " +
                           $"current pipeline ({infoParts[2]})";
                }
                case 705:
                {
                    var infoParts = SplitValues(issue.info, " :: ", 3);
                    var fixValueMessage = (infoParts[1] == "")
                        ? "It has a fixed value"
                        : $"It has the fix value \"{infoParts[1]}\"";
                    var reason = (infoParts[2] == "")
                        ? "because a requirement isn't met"
                        : $"because a requirement isn't met: {infoParts[2]}";
                    return
                        $"The parameter \"{infoParts[0]}\" could not be set. {fixValueMessage}, {reason}. For more details see the log message.";
                }
                default:
                {
                    return $"Unspecific issue when executing \"{issue.commandName}\": " +
                           $"{issue.message}\nError Code {issue.code}\nInfo: {issue.info}";
                }
            }
        }
    }
}
