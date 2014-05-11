#include <stdio.h>

#define MAXLENGTH 1000
#define LINELENGTH 80

int getlength(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
  int len;
  int max;
  char line[MAXLENGTH];
  char longest[MAXLENGTH];

  max = 0;
  printf("\n");
  while((len = getlength(line, MAXLENGTH)) > 0) {
    if(len > (LINELENGTH)) {
      printf("%d: %s", len, line);
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


void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0') {
    i++;
  }
}
