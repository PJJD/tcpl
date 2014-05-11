/**
 * This program reverses its input one line at a time,
 * using a function 'reverse(s)' to reverses the character
 * string s.
 */

#include <stdio.h>

#define MAXLENGTH 256

int main(int argc, char *argv[])
{
  int len;
  char line[MAXLENGTH];
  char reversed[MAXLENGTH];

  while((len = getlength(line, MAXLENGTH)) > 0) {
    reverse(line, reversed, len);
    printf("%s", reversed);
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

int reverse(char line[], char reversed[], int len)
{
  int i;

  if(line[len - 1] == '\n') {
    for(i = 0; i < (len -1); i++) {
      reversed[(len - 2) - i] = line[i];
    }
    reversed[len -1] = '\n';
  } else {
    for(i = 0; i < len; i++) {
      reversed[len - 1] = line[i];
    }
  }

  reversed[len] = '\0';

  return 0;
}
