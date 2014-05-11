#include <stdio.h>

int main(int argc, char *argv[])
{
  int c;

  int blanks = 0;
  int tabs = 0;
  int lines = 0;

  while((c = getchar()) != EOF) {
      switch(c) {
        case ' ':
          blanks++;
          break;

        case '\t':
          tabs++;
          break;

        case '\n':
          lines++;
          break;

        default:
          break;
      };
  }

  printf("There were %d blanks, %d tabs and %d lines in the file\n", blanks, tabs, lines);
}
