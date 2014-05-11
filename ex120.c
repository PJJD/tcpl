#include <stdio.h>

#define MAXLENGTH 256
#define TABSTOP 4

int getlength(char line[], int maxline);

int main(int argc, char *argv[])
{
  int i, j, len, spaces, tabs;
  char line[MAXLENGTH];

  while((len = getlength(line, MAXLENGTH)) > 0) {
    tabs = 0;
    for(i = 0; i < len; i++) {
      if(line[i] == '\t') {

        spaces = TABSTOP - ((i - tabs) % TABSTOP);

        for(j = 0; j < spaces; j++) {
          putchar(' ');
        }
        tabs++;
      } else {
        putchar(line[i]);
      }
    }
  }

  return 0;
}

int getlength(char line[], int maxline)
{
  int c, i;

  for(i = 0; i < maxline && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}
