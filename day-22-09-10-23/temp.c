/*
this program helps in temperature conversion from celsuis to fahrenheit and
vice versa
*/
#include <stdio.h>
int main() {
  float cel, fah, c2f, f2c;
  int choice;

  printf("\tTEMP CONVERTOR\nPRESS 1 FOR CELSIUS TO FAHRENHEIT\nPRESS 2 FOR FAHRENHEIT TO CELSIUS\n");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("enter temp in celsius : \n");
    scanf("%f", &cel);
    //cel = 37.0;
    c2f = ((9.0/5.0)*cel) + 32;
    printf("%f C in fahrenheit is : %f\n", cel, c2f);
  }
  else if (choice == 2) {
    printf("enter temp in fahrenheit : \n");
    scanf("%f", &fah);
    //fah = 98.6;
    f2c = (fah-32) * (5.0/9.0);
    printf("%f F in celsius is : %f\n", fah, f2c);
  }
  else {
    printf("something went wrong...\n");
  }

  return 0;
}
