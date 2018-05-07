Suppose that the function f has the following definition:

int f(int a, int b) { ... }

Which of the following statements are legal? (Assume that i has type int and x has type double.)

(a) i = f(83, 12);
(b) x = f(83, 12);
(c) i = f(3.15, 9.28);
(d) x = f(3.15, 9.28);
(e) f(83, 12);

Answer:
A - Legal, standard behavior
B - Legal, but the return value is converted into a double
C - Legal, but the arguments are truncated as ints and lose their decimal value
D - Legal, but the arguments are truncated as ints and lose their decimal value
F - Legal, but the return value is unused
