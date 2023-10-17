/*
Chef wants to gift C chocolates to Botswal on
his birthday. However, he has only X chocolates with him.
The cost of 1 chocolate is Y rupees.

Find the minimum money in rupees Chef needs to
spend so that he can gift C chocolates to Botswal.

CONSTRAINTS -
1≤T≤100
1≤C≤100
0≤X≤C
1≤Y≤100
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int t, c, x, y, i = 0, ans[101], more_Choco, money_req;
  scanf("%d", &t);
  if (t < 1 || t > 100) {
    printf("1≤T≤100\n");
    exit(0);
  }
  while (i != t) {
    scanf("%d %d %d", &c, &x, &y);
    if (c < 1 || c > 100) {
      printf("1≤C≤100\n");
      exit(0);
    }
    else if (y < 1 || y > 100) {
      printf("1≤Y≤100\n");
      exit(0);
    }
    else if (x < 0 || x > c) {
      printf("0≤X≤C\n");
      exit(0);
    }
    more_Choco = c - x;
    money_req = y * more_Choco;
    ans[i] = money_req; //stores amount of money required in an array
    i = i + 1;
  }
  printf("\n");
  for (i = 0; i != t; i = i + 1) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
