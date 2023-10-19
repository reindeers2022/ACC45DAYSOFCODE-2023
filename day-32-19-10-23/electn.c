/*
Election season has started in Chefland and the election
commission wants to know the count of eligible voters.

There are N people in Chefland where the age of the
ith person in Ai.
Given that a person needs to be at least X years old to vote,
find the number of eligible voters.
*/
#include <stdio.h>
int main() {
  int t, i = 0, n, x, ith, q, eligible_voter=0, ans[200];
  scanf("%d", &t);
  while (i != t) {
    // n = no. of people in Chefland
    // x = min. age required to vote
    scanf("%d %d", &n, &x);
    // take n inputs and ith value represents age of ith person
    for (q=0; q!=n; q=q+1) {
      scanf("%d", &ith);
      if (ith >= x)
      eligible_voter = eligible_voter + 1;
    }
    ans[i] = eligible_voter;
    eligible_voter = 0;
    i = i + 1;
  }
  for (i=0;i!=t;i=i+1) {
    printf("%d\n", ans[i]);
  }
  return 0;
}
