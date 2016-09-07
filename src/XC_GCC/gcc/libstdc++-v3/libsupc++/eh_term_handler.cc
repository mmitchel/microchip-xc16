// -*- C++ -*- std::terminate handler
// Copyright (C) 2002, 2003, 2009 Free Software Foundation
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

#include <bits/c++config.h>
#include "unwind-cxx.h"

/* We default to the talkative, informative handler in a normal hosted
   library.  This pulls in the demangler, the dyn-string utilities, and
   elements of the I/O library.  For a low-memory environment, you can return
   to the earlier "silent death" handler by including <cstdlib>, initializing
   to "std::abort", and rebuilding the library.  In a freestanding mode, we
   default to this latter approach.  */

#if ! _GLIBCXX_HOSTED
# include <cstdlib>
#endif

#if _GLIBCXX_HOSTED
#define DEFAULT_TERMINATE_HANDLER __gnu_cxx::__verbose_terminate_handler
#else
#define DEFAULT_TERMINATE_HANDLER std::abort
#endif
/* The current installed user handler.  */
#ifdef __symbian__
/* SymbianOS does not allow initialized data, so use a constructor function.  */
std::terminate_handler __cxxabiv1::__terminate_handler;

void __cxxabiv1::__init_terminate_handler(void)
{
  __cxxabiv1::__terminate_handler = DEFAULT_TERMINATE_HANDLER;
}
#else /* !__symbian__ */
std::terminate_handler __cxxabiv1::__terminate_handler =
  DEFAULT_TERMINATE_HANDLER;
#endif