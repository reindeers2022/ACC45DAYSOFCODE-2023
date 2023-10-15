/*
There are 100 questions in a paper. Each question carries
+3 marks for correct answer, -1 marks for incorrect
answer and 0 marks for unattempted question.

It is given that Chef received exactly X (0≤X≤100) marks.
Determine the minimum number of problems Chef marked
incorrect.
*/

//make a test cases counter loop
#include <stdio.h>
#include <math.h>

//function to return minimum incorrect answers
int incorrect(int arr[], int counter) {
  int x, y, ans[10000], n;
  printf("\n");
  for (n = 0 ; n != counter; n = n + 1) {
    x = arr[n];
    y = x - (3*(floor(x/3)));
    if (y == 0) {
      printf("%d\n", y);
    }
    else if (y != 0) {
      printf("%d\n", 3-y);
    }
  }

  return 0;

}

int main() {
  int cases, marks[10000], q=0, w, i;
  scanf("%d", &cases);

  //store user given values in an array
  while (q != cases) {
    scanf("%d", &w);
    marks[q] = w;
    q = q + 1;
  }

  incorrect(marks,cases);
  return 0;
}
