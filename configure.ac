dnl#                                               -*- Autoconf -*-
dnl# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([RandomNumberGame],[0.0.1],
        [https://github.com/cooljeanius/RandomNumberGame/issues])
AC_CONFIG_SRCDIR([src/main_randomnumbergame.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign subdir-objects])dnl

AM_MAINTAINER_MODE

# Checks for programs.
AC_PROG_CC

# Checks for header files.
AC_CHECK_HEADERS_ONCE([stdio.h time.h])dnl

# Checks for library functions.
AC_CHECK_FUNCS([printf scanf time])dnl

# Output.
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
