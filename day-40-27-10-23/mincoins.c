/*
Chef has infinite coins in denominations of rupees 5 and
rupees 10.

Find the minimum number of coins Chef needs, to pay exactly
X rupees. If it is impossible to pay X rupees in denominations
of rupees 5 and 10 only, print −1
*/
#include <stdio.h>
int main() {
  int t, x, i=0;
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d", &x);
    if ((x%10)%5 == 0)
    printf("%d\n", (x/10)+((x%10)/5));
    else
    printf("%d\n", -1);
    i=i+1;
  }
  return 0;
}
