Which of the following would be valid prototypes for a function that returns
nothing and has one double parameter?

(a) void f(double x);
(b) void f(double);
(c) void f(x);
(d) f(double x);

Answer:
A - Valid
B - Valid
C - Invalid, x is missing a datatype for its parameter
D - Depends, f is missing a datatype for its return value.
    Valid in C89, but it would default to an int return value.
    Invalid/Illegal in C99.
