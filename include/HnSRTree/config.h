#define HAVE_MEMMOVE

#if _MSC_VER < 1500
#define vsnprintf(s, n, format, ap)  vsprintf(s, format, ap)
#endif

#if !defined(_MT) || !defined(_DLL)
#error libHnSRTree.dll requires programs to be compiled with the /MD switch so that the global variables (e.g., errno) will be shared among the run-time library, the SR-tree library, and user's object files.
#endif

