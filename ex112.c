#include <stdio.h>

#define true 1;
#define false 0;

int main(int argc, char *argv[])
{
  int c;
  int FIRSTLETTER;

  while((c = getchar()) != EOF)
  {
    switch(c)
    {
      case '\n':
      case ' ':
      case '\t':
        FIRSTLETTER = true;
        break;
      default:
        if(FIRSTLETTER)
        {
          FIRSTLETTER = false;
          putchar('\n');
        }
        putchar(c);
        break;
    }
  }

  return 0;
}
