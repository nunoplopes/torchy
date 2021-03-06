#pragma once

// Copyright (c) 2021-present The Torchy Authors.
// Distributed under the MIT license that can be found in the LICENSE file.

//#define TORCHY_RELEASE

#define DUMMY_TORCHY 0x1

#ifdef TORCHY_RELEASE

#ifndef NDEBUG
#define NDEBUG
#endif

#else

#ifdef NDEBUG
#undef NDEBUG
#endif

#define TORCHY_PRINT_TRACE_ON_FLUSH
#define TORCHY_ENABLE_STATS

#endif

#include "stats.h"
