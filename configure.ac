#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([test], [1.0])
LT_INIT
AC_CONFIG_SRCDIR([test.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([foreign])
AM_SILENT_RULES([yes])

# Checks for programs.
AC_PROG_CC
AX_PKG_SWIG([],[],[AC_MSG_ERROR([SWIG is required to build..])])

PKG_CHECK_MODULES([LUA],[lua5.2],[],[AC_MSG_ERROR([Lua is required to build..])])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
