/*
this program prints the max digit from the 3digit number given by user
*/
#include <stdio.h>
int main() {
  int usrInt, fd, sd, td;
  printf("enter three digit number\n");
  scanf("%d", &usrInt);
  td = usrInt%10;
  sd = (usrInt/10)%10;
  fd = usrInt/100;
  //printf("%d,%d,%d\n", fd,sd,td);
  if (td > sd) {
    if (td > fd) {
      printf("%d is max\n", td);
    }
    else if (td < fd) {
      printf("%d is max\n", fd);
    }
    else if (sd > fd) {
      printf("%d is max\n", sd);
    }
    else if (sd < fd) {
      printf("%d is max\n", fd);
    }
  }
  return 0;
}
