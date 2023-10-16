/*
Alice, Bob, and Charlie are contributing to buy a
Netflix subscription. However, Netfix allows only
two users to share a subscription.

Given that Alice, Bob, and Charlie have A,B and C
rupees respectively and a Netflix subscription
costs X rupees, find whether any two of them can
contribute to buy a subscription.

ADD CONSTRAINTS -
1≤T≤1000
1≤A,B,C,X≤100
*/
#include <stdio.h>
#include <stdlib.h>
int ifTwoCanBuy(int arr[]) {
  int combo1, combo2, combo3;
  //possible combinations
  combo1 = arr[0] + arr[1];
  combo2 = arr[0] + arr[2];
  combo3 = arr[1] + arr[2];
  if (combo1 >= arr[3])
  printf("YES\n");
  else if (combo2 >= arr[3])
  printf("YES\n");
  else if (combo3 >= arr[3])
  printf("YES\n");
  else
  printf("NO\n");
  return 0;
}
int main() {
  int t, a, b, c, x, i, usr_inputs[10];
  scanf("%d", &t);
  if (t<1 || t>1000){
    printf("1≤T≤1000\n");
    exit(0);
  }
  while (t != 0) {  //taking and storing user`s inputs
    scanf("%d%d%d%d", &a, &b, &c, &x);
    usr_inputs[0] = a;
    usr_inputs[1] = b;
    usr_inputs[2] = c;
    usr_inputs[3] = x;
    for (i = 0; i != 3; i = i + 1) {
      if (usr_inputs[i] < 1 || usr_inputs[i] > 1000) {
        printf("1≤A,B,C,X≤100\n");
        exit(0);
      }
    }
    ifTwoCanBuy(usr_inputs); //calls function to print desired result
    t = t - 1;
  }
  return 0;
}
