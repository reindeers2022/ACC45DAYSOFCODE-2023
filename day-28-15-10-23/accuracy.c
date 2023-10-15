/*
There are 100 questions in a paper. Each question carries
+3 marks for correct answer, -1 marks for incorrect
answer and 0 marks for unattempted question.

It is given that Chef received exactly X (0≤X≤100) marks.
Determine the minimum number of problems Chef marked
incorrect.
*/
//firstly make a test cases counter loop
#include <stdio.h>
int main() {
  int cases;
  scanf("%d", &cases);
  while (cases != 0) {
    printf("enter case values :%d \n", cases);
    cases = cases - 1;
  }
  return 0;
}
