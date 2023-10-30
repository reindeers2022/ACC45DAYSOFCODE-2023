/*
Chef is confused whether to go out and eat at the restaurant or order food online.

The online order costs N rupees while the cost of eating at the restaurant is M rupees.
However, Chef has a discount coupon with which he can avail flat 10% off on his online order.

Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant.
*/
#include <stdio.h>
int main() {
  int t, ans[1000],i=0;
  float n, m;
  scanf("%d", &t);
  while (i!=t) {
    scanf("%f%f", &n, &m);
    n = (0.9)*n;
    if (n < m) {
      ans[i] = 1; //online
    }
    else if (n > m) {
      ans[i] = 2; //dining
    }
    else {
      ans[i] = 3; //either
    }
    i=i+1;
  }
  for (i=0;i!=t;i++) {
    if (ans[i] == 1)
    printf("ONLINE\n");
    else if (ans[i] == 2)
    printf("DINING\n");
    else if (ans[i] == 3)
    printf("EITHER\n");
  }
  return 0;
}
