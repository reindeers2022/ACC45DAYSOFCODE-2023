#include <stdio.h>
/*PROGRAM TO CALCULATE THE TOTAL NUMBERS OF TABS, BLANKS, NEWLINES OF GIVEN TEXT*/
int main(void)
{
  int blanks_nr = 0; //sets initial value to zero
  int tabs_nr = 0;
  int newlines_nr = 0;

  char c;
  printf("PRESS CTRL+D (LINUX) AND CTRL+Z (WINDOWS) TO STOP WRITING\nINPUT PARAGRAPHS INLCUDING CHARACTERS, NUMBERS, SPACES ETC....\n");
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++blanks_nr;  //adds number of spaces to counter
    }
    else if (c == '\t')
    {
      ++tabs_nr;
    }
    else if (c == '\n')
    {
      ++newlines_nr;
    }
  }

  printf("\nblanks_nr: %d\ntabs_nr: %d\nnewlines_nr: %d\n",
         blanks_nr, tabs_nr, newlines_nr);

  return 0;
}
