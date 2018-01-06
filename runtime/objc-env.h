// -*- truncate-lines: t; -*-

// OPTION(var, env, help)

OPTION( PrintImages,              OBJC_PRINT_IMAGES,               "log image and library names as they are loaded")
OPTION( PrintImageTimes,          OBJC_PRINT_IMAGE_TIMES,          "measure duration of image loading steps")
OPTION( PrintLoading,             OBJC_PRINT_LOAD_METHODS,         "log calls to class and category +load methods")
OPTION( PrintInitializing,        OBJC_PRINT_INITIALIZE_METHODS,   "log calls to class +initialize methods")
OPTION( PrintResolving,           OBJC_PRINT_RESOLVED_METHODS,     "log methods created by +resolveClassMethod: and +resolveInstanceMethod:")
OPTION( PrintConnecting,          OBJC_PRINT_CLASS_SETUP,          "log progress of class and category setup")
OPTION( PrintProtocols,           OBJC_PRINT_PROTOCOL_SETUP,       "log progress of protocol setup")
OPTION( PrintIvars,               OBJC_PRINT_IVAR_SETUP,           "log processing of non-fragile ivars")
OPTION( PrintVtables,             OBJC_PRINT_VTABLE_SETUP,         "log processing of class vtables")
OPTION( PrintVtableImages,        OBJC_PRINT_VTABLE_IMAGES,        "print vtable images showing overridden methods")
OPTION( PrintCaches,              OBJC_PRINT_CACHE_SETUP,          "log processing of method caches")
OPTION( PrintFuture,              OBJC_PRINT_FUTURE_CLASSES,       "log use of future classes for toll-free bridging")
OPTION( PrintPreopt,              OBJC_PRINT_PREOPTIMIZATION,      "log preoptimization courtesy of dyld shared cache")
OPTION( PrintCxxCtors,            OBJC_PRINT_CXX_CTORS,            "log calls to C++ ctors and dtors for instance variables")
OPTION( PrintExceptions,          OBJC_PRINT_EXCEPTIONS,           "log exception handling")
OPTION( PrintExceptionThrow,      OBJC_PRINT_EXCEPTION_THROW,      "log backtrace of every objc_exception_throw()")
OPTION( PrintAltHandlers,         OBJC_PRINT_ALT_HANDLERS,         "log processing of exception alt handlers")
OPTION( PrintReplacedMethods,     OBJC_PRINT_REPLACED_METHODS,     "log methods replaced by category implementations")
OPTION( PrintDeprecation,         OBJC_PRINT_DEPRECATION_WARNINGS, "warn about calls to deprecated runtime functions")
OPTION( PrintPoolHiwat,           OBJC_PRINT_POOL_HIGHWATER,       "log high-water marks for autorelease pools")
OPTION( PrintCustomRR,            OBJC_PRINT_CUSTOM_RR,            "log classes with un-optimized custom retain/release methods")
OPTION( PrintCustomAWZ,           OBJC_PRINT_CUSTOM_AWZ,           "log classes with un-optimized custom allocWithZone methods")
OPTION( PrintRawIsa,              OBJC_PRINT_RAW_ISA,              "log classes that require raw pointer isa fields")

OPTION( DebugUnload,              OBJC_DEBUG_UNLOAD,               "warn about poorly-behaving bundles when unloaded")
OPTION( DebugFragileSuperclasses, OBJC_DEBUG_FRAGILE_SUPERCLASSES, "warn about subclasses that may have been broken by subsequent changes to superclasses")
OPTION( DebugNilSync,             OBJC_DEBUG_NIL_SYNC,             "warn about @synchronized(nil), which does no synchronization")
OPTION( DebugNonFragileIvars,     OBJC_DEBUG_NONFRAGILE_IVARS,     "capriciously rearrange non-fragile ivars")
OPTION( DebugAltHandlers,         OBJC_DEBUG_ALT_HANDLERS,         "record more info about bad alt handler use")
OPTION( DebugMissingPools,        OBJC_DEBUG_MISSING_POOLS,        "warn about autorelease with no pool in place, which may be a leak")
OPTION( DebugPoolAllocation,      OBJC_DEBUG_POOL_ALLOCATION,      "halt when autorelease pools are popped out of order, and allow heap debuggers to track autorelease pools")
OPTION( DebugDuplicateClasses,    OBJC_DEBUG_DUPLICATE_CLASSES,    "halt when multiple classes with the same name are present")
OPTION( DebugDontCrash,           OBJC_DEBUG_DONT_CRASH,           "halt the process by exiting instead of crashing")

OPTION( DisableVtables,           OBJC_DISABLE_VTABLES,            "disable vtable dispatch")
OPTION( DisablePreopt,            OBJC_DISABLE_PREOPTIMIZATION,    "disable preoptimization courtesy of dyld shared cache")
OPTION( DisableTaggedPointers,    OBJC_DISABLE_TAGGED_POINTERS,    "disable tagged pointer optimization of NSNumber et al.") 
OPTION( DisableNonpointerIsa,     OBJC_DISABLE_NONPOINTER_ISA,     "disable non-pointer isa fields")
OPTION( DisableInitializeForkSafety, OBJC_DISABLE_INITIALIZE_FORK_SAFETY, "disable safety checks for +initialize after fork")
