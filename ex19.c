#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;
  short firstblank = 1;

  while((c = getchar()) != EOF)
  {
    switch(c)
    {
      case ' ':
        if(firstblank)
        {
          putchar(c);
          firstblank = 0;
        }
        break;
      default:
        firstblank = 1;
        putchar(c);
        break;
    }
  }

  return 0;
}
