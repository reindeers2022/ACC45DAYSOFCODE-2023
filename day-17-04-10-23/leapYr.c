/*
this is a program of my own
it prints whether an year given by user is a leap year or not
*/
#include <stdio.h>
int main() {
  int usrYr;
  printf("enter year :\n");
  scanf("%d", &usrYr);
  if ((usrYr%4) == 0) {printf("%d is a leap year", usrYr);}
  else if ((usrYr%4) != 0) {printf("%d is not a leap year\n", usrYr);}
  else {printf("something went wrong...\n");}
  return 0;
}
