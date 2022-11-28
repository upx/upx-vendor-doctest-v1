// Can't compile with glibc master (future 2.34): SIGSTKSZ is no longer a constant
// see https://github.com/doctest/doctest/issues/473

// mfx: should backport
// https://github.com/doctest/doctest/commit/099d5414e97244ec44cf46b14cd176b3a3dc52e3

// mfx: current workaround
#define DOCTEST_CONFIG_NO_POSIX_SIGNALS
#undef DOCTEST_CONFIG_POSIX_SIGNALS
#include "doctest_impl.h"
