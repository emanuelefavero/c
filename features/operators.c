#include <stdio.h>

int main(void) {
  // * OPERATORS
  // * Arithmetic operators
  // +
  int a = 1 + 1;
  printf("%d\n", a); // 2

  // -
  int b = 2 - 1;
  printf("%d\n", b); // 1

  // *
  int c = 2 * 2;
  printf("%d\n", c); // 4

  // /
  int d = 4 / 2;
  printf("%d\n", d); // 2

  // %
  int e = 5 % 2;
  printf("%d\n", e); // 1, remainder of 5 divided by 2, 2*2=4, 5-4=1

  // ++
  int f = 1;
  f++;
  printf("%d\n", f); // 2

  // --
  int g = 2;
  g--;
  printf("%d\n", g); // 1

  // * Assignment operators
  // =
  int h = 1;
  printf("%d\n", h); // 1

  // +=
  int i = 1;
  i += 2;
  printf("%d\n", i); // 3

  // -=
  int j = 2;
  j -= 1;
  printf("%d\n", j); // 1

  // *=
  int k = 2;
  k *= 2;
  printf("%d\n", k); // 4

  // /=
  int l = 4;
  l /= 2;
  printf("%d\n", l); // 2, 4 divided by 2

  // %=
  int m = 10;
  m %= 3;
  printf("%d\n", m); // 1, 10 divided by 3, 3*3=9, 10-9=1

  // * Comparison operators
  // ==
  int n = 1;
  printf("%d\n", n == 1); // 1, true

  // !=
  int o = 1;
  printf("%d\n", o != 1); // 0, false

  // >
  int p = 1;
  printf("%d\n", p > 1); // 0, false

  // <
  int q = 1;
  printf("%d\n", q < 1); // 0, false

  // >=
  int r = 1;
  printf("%d\n", r >= 1); // 1, true

  // <=
  int s = 1;
  printf("%d\n", s <= 1); // 1, true

  // * Logical operators
  // &&
  int t = 1;
  printf("%d\n", t && 1); // 1, true, 1 and 1 is true

  // ||
  int u = 1;
  printf("%d\n", u || 0); // 1, true, 1 or 0 is true

  // !
  int v = 1 == 1;
  printf("%d\n", !v); // 0, false, not true is false

  // * Bitwise operators
  // &
  int w = 1 & 1;
  printf("%d\n", w); // 1, 1 and 1 is 1

  // |
  int x = 1 | 0;
  printf("%d\n", x); // 1, 1 or 0 is 1

  // ^
  int y = 1 ^ 0;
  printf("%d\n", y); // 1, 1 xor 0 is 1

  // ~
  int z = ~1;
  printf("%d\n", z); // -2, bitwise not 1 is -2

  // <<
  int aa = 3 << 1;
  printf("%d\n", aa); // 6, 3 shifted left by 1 is 6, 3*2=6

  // >>
  int ab = 3 >> 1;
  printf("%d\n", ab); // 1, 3 shifted right by 1 is 1, 3/2=1

  return 0;
}
