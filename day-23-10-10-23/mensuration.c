/*
this is a program to calculate basic mensuration
problems
*/
#include <stdio.h>
//area of rectangle/square
int areaRect() {
  float length, breadth, area;
  printf("enter length : \n");
  scanf("%f", &length);
  printf("enter breadth : \n");
  scanf("%f", &breadth);
  area = length*breadth;
  printf("area : %.2f\n", area);
  return 0;
}
//perimeter of rectangle/square
int perRect() {
  float length, breadth, perimeter;
  printf("enter length : \n");
  scanf("%f", &length);
  printf("enter breadth : \n");
  scanf("%f", &breadth);
  perimeter = 2*(length+breadth);
  printf("perimeter : %.2f\n", perimeter);
  return 0;
}
//area of circle
int areaCir() {
  float radius, area;
  const float PI = 3.14;
  printf("enter radius : \n");
  scanf("%f", &radius);
  area = PI*radius*radius;
  printf("area : %.2f\n", area);
}
//perimeter of circle
int perCir() {
  float radius, perimeter;
  const float PI = 3.14;
  printf("enter radius : \n");
  scanf("%f", &radius);
  perimeter = 2*PI*radius;
  printf("perimeter : %.2f\n", perimeter);
  return 0;
}
//perimeter of triangle
int perTri() {
  float fside, sside, tside, perimeter;
  printf("enter length of first side : \n");
  scanf("%f", &fside);
  printf("enter length of second side : \n");
  scanf("%f", &sside);
  printf("enter length of third side : \n");
  scanf("%f", &tside);
  perimeter = fside + sside + tside;
  printf("perimeter : %.2f\n", perimeter);
  return 0;
}
//area of triangle
int areaTri() {
  float base, height, area;
  printf("enter length of base : \n");
  scanf("%f", &base);
  printf("enter height : \n");
  scanf("%f", &height);
  area = (1.0/2.0)*base*height;
  printf("area : %.2f\n", area);
  return 0;
}
int main() {
  int choice;
  printf("\tFIND AREA AND PERIMETER\nPRESS 1 FOR AREA OF RECT/SQUARE\nPRESS 2 FOR PERIMETER OF RECT/SQUARE\n");
  printf("PRESS 3 FOR AREA OF CIRCLE\nPRESS 4 FOR PERIMETER OF CIRCLE\n");
  printf("PRESS 5 FOR AREA OF EQULATERAL TRIANGLE\nPRESS 6 FOR PERIMETER OF EQUILATERAL TRIANGLE\n");
  scanf("%d", &choice);
  if (choice == 1) {areaRect();}
  else if (choice == 2) {perRect();}
  else if (choice == 3) {areaCir();}
  else if (choice == 4) {perCir();}
  else if (choice == 5) {areaTri();}
  else if (choice == 6) {perTri();}
  else {printf("something went wrong...");}
  return 0;
}
