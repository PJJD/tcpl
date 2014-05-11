#include <stdio.h>
#define MAXLINE 10

int getlength(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char *argv[])
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getlength(line, MAXLINE)) > 0) {
    if(len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if(max > 0) {
    printf("%s", longest);
    printf("\n%d", max);
  }

  return 0;
}

int getlength(char line[], int maxline)
{
  int c, i;

  for(i = 0; (c = getchar()) != EOF && c != '\n'; i++) {
    if(i < maxline) {
      line[i] = c;
    }
  }

  if (c == '\n') {
    if(i < maxline) {
      line[i] = c;
      i++;
      line[i] = '\0';
    }
  }

  line[maxline] = '\0';

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
