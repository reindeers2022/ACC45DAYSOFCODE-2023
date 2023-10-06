/*
this programs prints the multiples of 5
*/
#include <stdio.h>
void main() {
  int t, n;
  t = 5;
  n = 0;
  while (n <= 100) {
    printf("%d\n",t*n);
    n = n + 1;
  }
}
