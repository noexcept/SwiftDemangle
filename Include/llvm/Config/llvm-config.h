/*===------- llvm/Config/llvm-config.h - llvm configuration -------*- C -*-===*/
/*                                                                            */
/* Part of the LLVM Project, under the Apache License v2.0 with LLVM          */
/* Exceptions.                                                                */
/* See https://llvm.org/LICENSE.txt for license information.                  */
/* SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception                    */
/*                                                                            */
/*===----------------------------------------------------------------------===*/

/* This file enumerates variables from the LLVM configuration so that they
   can be in exported headers and won't override package specific directives.
   This is a C header that can be included in the llvm-c headers. */

#ifndef LLVM_CONFIG_H
#define LLVM_CONFIG_H

/* Define if LLVM_ENABLE_DUMP is enabled */
/* #undef LLVM_ENABLE_DUMP */

/* Target triple LLVM will generate code for by default */
/* Doesn't use `cmakedefine` because it is allowed to be empty. */
#define LLVM_DEFAULT_TARGET_TRIPLE ""

/* Define if threads enabled */
#define LLVM_ENABLE_THREADS 0

/* Has gcc/MSVC atomic intrinsics */
#define LLVM_HAS_ATOMICS 0

/* Host triple LLVM will be executed on */
/* #undef LLVM_HOST_TRIPLE */

/* LLVM architecture name for the native architecture, if available */
/* #undef LLVM_NATIVE_ARCH */

/* LLVM name for the native AsmParser init function, if available */
/* #undef LLVM_NATIVE_ASMPARSER */

/* LLVM name for the native AsmPrinter init function, if available */
/* #undef LLVM_NATIVE_ASMPRINTER */

/* LLVM name for the native Disassembler init function, if available */
/* #undef LLVM_NATIVE_DISASSEMBLER */

/* LLVM name for the native Target init function, if available */
/* #undef LLVM_NATIVE_TARGET */

/* LLVM name for the native TargetInfo init function, if available */
/* #undef LLVM_NATIVE_TARGETINFO */

/* LLVM name for the native target MC init function, if available */
/* #undef LLVM_NATIVE_TARGETMC */

/* LLVM name for the native target MCA init function, if available */
/* #undef LLVM_NATIVE_TARGETMCA */

/* Define if this is Unixish platform */
/* #undef LLVM_ON_UNIX */

/* Define if we have the Intel JIT API runtime support library */
#define LLVM_USE_INTEL_JITEVENTS 0

/* Define if we have the oprofile JIT-support library */
#define LLVM_USE_OPROFILE 0

/* Define if we have the perf JIT-support library */
#define LLVM_USE_PERF 0

/* Major version of the LLVM API */
#define LLVM_VERSION_MAJOR 

/* Minor version of the LLVM API */
#define LLVM_VERSION_MINOR 

/* Patch version of the LLVM API */
#define LLVM_VERSION_PATCH 

/* LLVM version string */
#define LLVM_VERSION_STRING ""

/* Whether LLVM records statistics for use with GetStatistics(),
 * PrintStatistics() or PrintStatisticsJSON()
 */
#define LLVM_FORCE_ENABLE_STATS 0

/* Define if we have z3 and want to build it */
/* #undef LLVM_WITH_Z3 */

/* Define if we have curl and want to use it */
/* #undef LLVM_ENABLE_CURL */

/* Define if we have cpp-httplib and want to use it */
/* #undef LLVM_ENABLE_HTTPLIB */

/* Define if zlib compression is available */
#define LLVM_ENABLE_ZLIB 0

/* Define if zstd compression is available */
#define LLVM_ENABLE_ZSTD 0

/* Define if LLVM was built with a dependency to the libtensorflow dynamic library */
/* #undef LLVM_HAVE_TF_API */

/* Define if LLVM is using tflite instead of libtensorflow */
/* #undef LLVM_HAVE_TFLITE */

/* Define to 1 if you have the <sysexits.h> header file. */
/* #undef HAVE_SYSEXITS_H */

/* Define if the xar_open() function is supported on this platform. */
/* #undef LLVM_HAVE_LIBXAR */

/* Define if building libLLVM shared library */
/* #undef LLVM_BUILD_LLVM_DYLIB */

/* Define if building LLVM with BUILD_SHARED_LIBS */
/* #undef LLVM_BUILD_SHARED_LIBS */

/* Define if building LLVM with LLVM_FORCE_USE_OLD_TOOLCHAIN_LIBS */
/* #undef LLVM_FORCE_USE_OLD_TOOLCHAIN */

/* Define if llvm_unreachable should be optimized with undefined behavior
 * in non assert builds */
#define LLVM_UNREACHABLE_OPTIMIZE 0

/* Define to 1 if you have the DIA SDK installed, and to 0 if you don't. */
#define LLVM_ENABLE_DIA_SDK 0

#endif
