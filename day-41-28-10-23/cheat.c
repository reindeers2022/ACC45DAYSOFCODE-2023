/*
Eat, drink, and be scary

There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its
spooky menu daily. He particularly enjoys what they serve
on Tuesday.

Today is Monday, so he wishes to calculate how many times
he can indulge in his favourite menu in the next N days
(including today) before Halloween.

Note that Dracula follows the standard 7-day calendar, with
Tuesday immediately following Monday.
*/
#include <stdio.h>
int main() {
  int t, n;
  scanf("%d", &t);
  while(t!=0) {
    scanf("%d", &n); //number of spooky days left
    int fav_meal = n/7;
    if (n%7 >= 2)
    fav_meal = fav_meal + 1;
    printf("%d\n", fav_meal);
    t=t-1;
  }
  return 0;
}
