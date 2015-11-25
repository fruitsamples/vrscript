//////////////	File:		FileUtilities.h////	Contains:	Some utilities for working with pathnames, files, and file specifications.//				All utilities start with the prefix "FileUtils_".////	Written by:	Tim Monroe////	Copyright:	� 1999 by Apple Computer, Inc., all rights reserved.////	Change History (most recent first):////	   <1>	 	05/27/99	rtm		first file//	 //////////#pragma once////////////// header files////////////#ifndef __FileUtilities__#define __FileUtilities__#if defined(_MSC_VER)#include <windows.h>#include <winbase.h>#endif#if TARGET_OS_WIN32	#ifndef __QTML__	#include <QTML.h>	#endif#endif#include <string.h>#include <stdlib.h>#ifndef __URLUtilities__#include "URLUtilities.h"#endif////////////// compiler flags////////////////////////// constants////////////#define kFileSuffixSeparator		(char)'.'		// file suffix separator#define kFileSuffixSepString		"."				// file suffix separator as a string////////////// macros////////////////////////// function prototypes////////////OSErr							FileUtils_MakeFSSpecForPathName (short theVRefNum, long theDirID, char *thePathName, FSSpec *theFSSpec);OSErr							FileUtils_MakeFSSpecForAnyFileInDir (Str255 thePathName, FSSpecPtr theFileFSSpec);static Boolean					FileUtils_IsFullPathName (char *thePathName);char *							FileUtils_GetBaseName (char *thePathName);char *							FileUtils_ChangeFileNameSuffix (char *thePathName, char *theNewSuffix);#endif	// __FileUtilities__