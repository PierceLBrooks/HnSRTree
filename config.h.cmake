/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define to `long' if <sys/types.h> doesn't define.  */
#undef off_t

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
#undef size_t

/* Define if you have the ANSI C header files.  */
#undef STDC_HEADERS

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#undef TIME_WITH_SYS_TIME

/* Define if you want this package to be configured for debugging. */
#undef DEBUGGING

/* Define if you have the memmove function.  */
#ifndef HAVE_MEMMOVE
#cmakedefine HAVE_MEMMOVE ${HAVE_MEMMOVE}
#endif

/* Define if you have the strerror function.  */
#ifndef HAVE_STRERROR
#cmakedefine HAVE_STRERROR ${HAVE_STRERROR}
#endif

/* Define if you have the <fpu_control.h> header file.  */
#ifndef HAVE_FPU_CONTROL_H
#cmakedefine HAVE_FPU_CONTROL_H ${HAVE_FPU_CONTROL_H}
#endif

/* Define if you have the <ieeefp.h> header file.  */
#ifndef HAVE_IEEEFP_H
#cmakedefine HAVE_IEEEFP_H ${HAVE_IEEEFP_H}
#endif

/* Define if you have the <nan.h> header file.  */
#undef HAVE_NAN_H

/* Define if you have the <sys/time.h> header file.  */
#ifndef HAVE_SYS_TIME_H
#cmakedefine HAVE_SYS_TIME_H ${HAVE_SYS_TIME_H}
#endif

/* Define if you have the m library (-lm).  */
#undef HAVE_LIBM
