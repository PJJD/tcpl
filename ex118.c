/**
 * This program removes trailing blanks and tabs from
 * each line of input. Entirely blank lines are deleted
 */

#include <stdio.h>

#define MAXLENGTH 256

int main(int argc, char *argv[])
{
  int len, lastchar;
  char line[MAXLENGTH];

  while((len = getlength(line, MAXLENGTH)) > 0) {
    lastchar = getlastchar(line, len);

    striptralingwhitespace(line, len, lastchar);

    if (lastchar > 0) {
      printf("%s", line);
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

int getlastchar(char line[], int len)
{
  int c, i;
  int last = -1;

  for(i = 0; i < len && (c = line[i]) != EOF && c!= '\n'; i++) {
    if(c != ' ' && c != '\t') {
      last = i;
    }
  }

  return last;
}

int striptralingwhitespace(char line[], int len, int lastchar)
{
  if(line[len-1] == '\n') {
    line[lastchar + 1] = '\n';
    line[lastchar + 2] = '\0';
  } else {
    line[lastchar + 1] = '\0';
  }

  return 0;
}


