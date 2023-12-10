// Copyright (c) Visometry GmbH.

/**
 * \file vlSDKVersion.h
 * \brief This file contains defines with the VisionLib version.
 *
 * You can use those defines and the ::vlGetVersionMajor,
 * ::vlGetVersionMinor, ::vlGetVersionRevision, ::vlGetVersionString, 
 * ::vlGetVersionHashString and/or ::vlGetVersionTimestampString functions to 
 * check whether the binaries have the same version as the source files.
 *
 * \see http://www.visionlib.com
 */

#ifndef VL_SDK_VERSION_H
#define VL_SDK_VERSION_H

/*! Major version. */
#define VL_SDK_VERSION_MAJOR 3

/*! Minor version. */
#define VL_SDK_VERSION_MINOR 1

/*! Revision version. */
#define VL_SDK_VERSION_REVISION 1

/*! version pre-release postfix. */
#define VL_SDK_VERSION_POSTFIX ""

/*! Version as string. */
#define VL_SDK_VERSION_STRING "3.1.1"

/*! Version hash as string. */
#define VL_SDK_VERSION_HASH_STRING "bb1d93f44f3ef7e932e4f01fb737e9022b6d49d5"

/*! Creation timestamp of this version. */
#define VL_SDK_VERSION_TIMESTAMP_STRING "2023-11-08 13:03:29"

#endif
