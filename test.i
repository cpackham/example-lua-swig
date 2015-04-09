%module test
%include <typemaps.i>

%header %{
#include "test.h"
%}

%apply int *OUTPUT {int *out};
//%apply SWIGTYPE* *OUTPUT {STC *out};
%include test.h
