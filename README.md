# bari
Simple Low-Level OpenGL Utility Library

# Note To Contributors
This library is intended to be linked statically. Therefore, with the exception
of groups of functions that *must* be called together, each function should live
in its own compilation unit and object file, i.e. each function that is part of
the API should be in its own C file. This keeps dead object code out of user's
executables.
