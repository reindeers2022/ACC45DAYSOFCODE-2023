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
  int cases, marks[10000], q=0, w, i;
  scanf("%d", &cases);
  while (q != cases) {
    scanf("%d", &w);
    marks[q] = w;
    q = q + 1;
  }
  
  printf("\n");
  for (i = 0; i != cases; i = i + 1) {
    printf("%d", marks[i], marks[i]);
  }
  return 0;
}
