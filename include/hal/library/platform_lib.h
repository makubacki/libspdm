/**
    Copyright Notice:
    Copyright 2022 DMTF. All rights reserved.
    License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/libspdm/blob/main/LICENSE.md
**/

#ifndef __PLATFORM_LIB_H__
#define __PLATFORM_LIB_H__

/**
  Suspends the execution of the current thread until the time-out interval elapses.

  @param milliseconds     The time interval for which execution is to be suspended, in milliseconds.

**/
void libspdm_sleep(IN uint64_t milliseconds);

#endif // __PLATFORM_LIB_H__