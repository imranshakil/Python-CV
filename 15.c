/*
Let f be the following function:

int f(char *s, char *t)
{
  char *p1, *p2;

  for (p1 = s; *p1; p1++) {
    for (p2 = t; *p2; p2++)
      if (*p1 == *p2) break;
    if (*p2 == '\0') break;
  }
  return p1 - s;
}

(a) What is the value of f("abcd", "babc")?
(b) What is the value of f("abcd", "bcd")?
(c) In general, what value does f return when passed two strings s and t?

Answer:
A - 3
B - 0
C - It returns the index position of the first character in string s that
    doesn't appear in string t, and if both strings contain the same characters,
    it returns the length of s.  For example, in question (b), it returns 0,
    which is the position of 'a' in the string "abcd", because 'a' doesn't
    appear in "bcd".

*/
