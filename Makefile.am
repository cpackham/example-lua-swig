ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libtest.la
AM_CFLAGS = $(LUA_CFLAGS)

%_wrap.c: %.i
	$(AM_V_GEN)$(SWIG) -lua -o $@ $<

%_wrap.d: %.i
	$(AM_V_GEN)$(SWIG) -MM -o $@ $<

-include test_wrap.d

libtest_la_SOURCES = test.c
nodist_libtest_la_SOURCES = test_wrap.c
CLEANFILES = test_wrap.c test_wrap.d

install-exec-hook:
	(cd $(DESTDIR) && $(LN_S) .$(libdir)/libtest.so.0.0.0 test.so)
