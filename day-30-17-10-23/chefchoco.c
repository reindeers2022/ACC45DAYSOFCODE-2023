/*
Chef wants to gift C chocolates to Botswal on
his birthday. However, he has only X chocolates with him.
The cost of 1 chocolate is Y rupees.

Find the minimum money in rupees Chef needs to
spend so that he can gift C chocolates to Botswal.
*/
#include <stdio.h>
int main() {
  int t, c, x, y, i = 0, ans[101], more_Choco, money_req;
  scanf("%d", &t);
  while (i != t) {
    scanf("%d %d %d", &c, &x, &y);
    more_Choco = c - x;
    money_req = y * more_Choco;
    ans[i] = money_req;
    i = i + 1;
  }
  printf("\n");
  for (i = 0; i != t; i = i + 1) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
