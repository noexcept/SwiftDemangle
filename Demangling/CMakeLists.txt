#if(SWIFT_RUNTIME_CRASH_REPORTER_CLIENT)
#  list(APPEND swift_demangling_compile_flags
#      "-DSWIFT_HAVE_CRASHREPORTERCLIENT=1")
#endif()

add_library(swiftDemangling STATIC
  Demangler.cpp
  Context.cpp
  ManglingUtils.cpp
  NodeDumper.cpp
  NodePrinter.cpp
  OldDemangler.cpp
  OldRemangler.cpp
  Punycode.cpp
  Remangler.cpp
  Errors.cpp
  CrashReporter.cpp
)

set(swift_demangling_compile_flags
        LLVM_DISABLE_ABI_BREAKING_CHECKS_ENFORCING=1
        SWIFT_SUPPORT_OLD_MANGLING=1
        SWIFT_STDLIB_HAS_TYPE_PRINTING=1)

target_compile_definitions(swiftDemangling PRIVATE
        ${swift_demangling_compile_flags})
