/*
Chef's phone has a total storage of S MB. Also, Chef has
2 apps already installed on his phone which occupy X MB
and Y MB respectively.

He wants to install another app on his phone whose memory
requirement is Z MB. For this, he might have to delete the
apps already installed on his phone. Determine the minimum
number of apps he has to delete from his phone so that he
has enough memory to install the third app.
*/
#include <stdio.h>
int main() {
  int s, x, y, z, t, i=0;
  scanf("%d", &t);
  while (i!=t) {
    scanf("%d%d%d%d", &s, &x, &y, &z);
    int space_left = s-x-y;
    int app_rem = 0;
    if (z <= space_left)
    app_rem = 0;
    else if (z <= space_left+x || z <= space_left+y)
    app_rem = 1;
    else if (z <= space_left+x+y)
    app_rem = 2;
    printf("%d\n", app_rem);
  }
  return 0;
}
