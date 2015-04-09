# Example generation of Lua bindings using SWIG

## Building this example

```
autoreconf -fvi
./configure --prefix=/
make DESTDIR=<path> install
```

## Using example in Lua
```
cd <path>
lua

Lua 5.2.3  Copyright (C) 1994-2013 Lua.org, PUC-Rio
> require 'test'
> r,v = test.func2(1,1)
> print(r,v)
0       2

```
