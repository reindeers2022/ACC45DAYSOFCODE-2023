/*
Chefland consists of three countries named A,B and C.

    Country A exports goods worth A1​ units and imports goods
    worth A2​ units.
    Country B exports goods worth B1​ units and imports goods
    worth B2​ units.

A trade surplus occurs when a country exports strictly more
than it imports.
Find whether country C is in trade surplus.

Note that the countries A,B,C trade only between themselves.
*/
#include <stdio.h>
int main() {
  int t, a1, a2, b1, b2, i=0;
  scanf("%d", &t);
  while (i != t) {
    scanf("%d%d%d%d", &a1, &a2, &b1, &b2);
    int net_trade = (a1-a2)+(b1-b2);
    if (net_trade < 0)
    printf("YES\n");
    else
    printf("NO\n");
    i=i+1;
  }
  return 0;
}
