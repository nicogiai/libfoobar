#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([libfoobar], [1.0.0])
AM_INIT_AUTOMAKE
AC_CONFIG_SRCDIR([src/reverse.c])
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_MACRO_DIRS([m4])

LT_PREREQ([2.2])
LT_INIT

# Checks for programs.
AC_PROG_CC
AC_PROG_INSTALL
AM_PROG_CC_C_O
AC_CHECK_PROGS([DOXYGEN], [doxygen])

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h stdio.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES(Makefile)
AC_CONFIG_FILES(src/Makefile)
AC_CONFIG_FILES(include/Makefile)
AC_CONFIG_FILES(example/Makefile)
AC_CONFIG_FILES(docs/Makefile)
AC_CONFIG_FILES(docs/doxygen/Doxyfile)

AC_OUTPUT
