#include <stdio.h>

#define MAXLENGTH 256
#define TABSTOP 4

int entab(char c, char line[], int pos, int len);
int getlength(char line[], int maxline);

int main(int argc, char *argv[])
{
  int i, len;
  char c;
  char line[MAXLENGTH];

  while((len = getlength(line, MAXLENGTH)) > 0) {
    for(i = 0; i < len; i++) {
      c = line[i];
      if(c != ' ') {
        putchar(c);
      } else {
        i = entab(c, line, i, len);
      }
    }
  }

  return 0;
}

int entab(char c, char line[], int pos, int len)
{
  // Doesn't take position on the line into account...
  // TODO: Add code to take position on the current line into account
  int j, spaces, tabs, extra_spaces, next_tabstop, newpos;
  spaces = 0;
  tabs = 0;

  next_tabstop = pos + (TABSTOP - (pos % TABSTOP));

  for(j = pos; (j < len) && (line[j] == ' '); j++) {
    spaces++;
  }

  newpos = --j;

  if (spaces == 1) {
    putchar(' ');
  } else if(next_tabstop <= (pos + spaces)) {
    tabs = (spaces - (next_tabstop - pos)) / TABSTOP;
    extra_spaces = (spaces - (next_tabstop - pos)) % TABSTOP;
    for(j = 0; j <= tabs; j++) {
      putchar('\t');
    }
    for(j = 0; j < extra_spaces; j++) {
      putchar(' ');
    }
  } else {
    for(j = 0; j < spaces; j++);
    putchar(' ');
  }

  return newpos;
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
