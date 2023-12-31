/*
this is a program to print the compound interest for
user given values of parameters required to calculate
the same
formulae = A = P(1 + r/n)^(nt)
where,
A = compound interest
P = principal
r = parameters
t = time
n = times interest is compounded per year
*/
#include <stdio.h>
#include <math.h>
int main() {
  /*
  firstly i must take the necessary inputs from the user
  and store them as float datatype
  */

  float cpdInt, Prn, r, n, t;
  printf("enter principal amount :\n");
  scanf("%f", &Prn);
  printf("enter rate :\n");
  scanf("%f", &r);
  printf("enter number of times interest compounds per year :\n");
  scanf("%f", &n);
  printf("enter time :\n");
  scanf("%f", &t);

  /*
  to calculate the compound interest, we need to raise a term to some
  power so we use pow() from <math.h>
  */
  float x = pow((1+(r/n)),(n*t));
  printf("compound interest : %.4f\n", Prn*x);
  return 0;
}
