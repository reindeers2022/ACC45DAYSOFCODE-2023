/*
this program calculates the factorial of any given number
*/
#include <stdio.h>
int main() {
  int factNo, ans;
  ans = 1;
  printf("enter any positive integer >0 :\n");
  scanf("%d", &factNo);
  while (factNo != 1) {
      ans = ans*factNo;
      factNo = factNo - 1;
      //printf("%d\n", factNo);
  }
  printf("factorial is : %d\n", ans);
  return 0;
}
