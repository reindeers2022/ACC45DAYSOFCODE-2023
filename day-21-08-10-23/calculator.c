/*
this is a program that takes two operands as input and prints their Sum
, Difference, Product, Quotient, Remainder
*/
#include <stdio.h>
int main() {
  int a, b, opt;

  printf("\tTWO OPERAND CALCULATOR\nENTER FIRST NUMBER :\n");
  scanf("%d", &a);
  printf("ENTER SECOND NUMBER (must be lesser than first number) :\n");
  scanf("%d", &b);

  printf("PRESS 1 TO ADD\nPRESS 2 TO SUBTRACT\n");
  printf("PRESS 3 TO MULTIPLY\nPRESS 4 TO DIVIDE\nPRESS 5 TO GET REMAINDER OF DIVISION\n");
  scanf("%d", &opt);

  if (opt == 1) {printf("Sum is : %d", a+b);}
  else if (opt == 2) {printf("Difference is : %d", a-b);}
  else if (opt == 3) {printf("Product is : %d", a*b);}
  else if (opt == 4) {printf("Quotient is : %d", a/b);}
  else if (opt == 5) {printf("Remainder is : %d", a%b);}
  else {printf("something went wrong...");}
  return 0;
}
