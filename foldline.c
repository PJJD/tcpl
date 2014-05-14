#include <stdio.h>

#define MAXLENGTH 512
#define FOLDLENGTH 80

int getlength(char line[], int maxline);
void foldlines(char line[], int len);
int last_nonblank(int start, int stop, char line[]);

int main(int argc, char *argv[])
{
    int len;
    char line[MAXLENGTH];

    while((len = getlength(line, MAXLENGTH)) > 0) {
        if(len > FOLDLENGTH + 1) {
            foldlines(line, len);
        } else {
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

void foldlines(char line[], int len)
{
    int i, start, end, last_char;
    i = 0;
    start = 0;

    end = start + FOLDLENGTH;

    while(start < len) {
        last_char = 0;
        last_char = last_nonblank(start, end, line);

        if(last_char > 0) {
            for(i = start; i <= last_char; i++) {
                putchar(line[i]);
            }
            putchar('\n');
            start = last_char + 1;
            if(len - last_char <= FOLDLENGTH) {
                for(i = last_char + 1; i < len; i++) {
                    putchar(line[i]);
                }
                break;
            } else {
                end = last_char + FOLDLENGTH + 1;
            }
        } else {
            putchar('\n');
            start += FOLDLENGTH;
            if(len - FOLDLENGTH <= FOLDLENGTH) {
                break;
            } else {
                end = end + FOLDLENGTH;
            }
        }
    }
}

int last_nonblank(int start, int stop, char line[])
{
    int i, last;
    i = start;
    char c;

    while(i < stop) {
        c = line[i];
        if(c != ' ' && c != '\n' && c != '\t' && c != '\n') {
            last = i;
        }
        i++;
    }

    return last;
}
