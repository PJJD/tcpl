#include <stdio.h>

int main(int argc, char *argv[])
{
  int i, j, c, max_count, max_length;
  int char_counts[95];

  for(i = 0; i < 95; i++) {
    char_counts[i] = 0;
  }

  max_count = 0;

  while ((c = getchar()) != EOF) {
    if(c >= ' ' && c <= '~') {
      char_counts[c - ' ']++;
      if(char_counts[c - ' '] > max_count) max_count = char_counts[c - 32];
    }
  }

  /*
  for(i = 0; i < 95; i++) {
    printf("%c appears %d times", (i + 32), char_counts[i]);
  }
  */

  for(i = max_count; i > 0; i--) {
    printf("\n%3d|", i);
    for(j = 0; j < 95; j++) {
      if(char_counts[j] >= i) {
        printf("#");
      } else {
        printf(" ");
      }
    }
  }

  printf("\n    ");
  for (i = 1; i <= 95; i++) {
    printf("_");
  }
  printf("\n");

  printf("\n    ");
  for (i = 1; i<= 95; i++) {
    putchar(i + 31);
  }

  return 0;
}
