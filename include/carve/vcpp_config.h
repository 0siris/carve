/* include/carve/config.h.  Generated from config.h.in by configure.  */
#pragma once


#if defined(_MSC_VER)
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif

#include <math.h>

#if defined(_MSC_VER)
#pragma warning(disable : 4201)
#endif

#include <math.h>

static inline double round(double value) {
  return (value >= 0) ? floor(value + 0.5) : ceil(value - 0.5);
}
