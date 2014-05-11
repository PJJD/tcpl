#include <stdio.h>

#define true 1
#define false 0

int main(int argc, char *argv[])
{
  int i, j, c, max_count, max_length;
  int new_word = true;
  int length_counts[20];

  max_length = 0;

  for(i = 0; i < 20; i++) {
    length_counts[i] = 0;
  }

  i = -1;

  while ((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      if(i > 0) {
        length_counts[i-1]++;
        new_word = true;
      }
    }
    else {
      if(new_word) {
        i = 0;
        new_word = false;
      }
      i++;
    }
  }

  max_count = 0;

  for(i = 0; i < 20; i++) {
    printf("%d words of length %d\n", length_counts[i], i+1);
    if(length_counts[i] > max_count) max_count = length_counts[i];
    if(length_counts[i] > 0) max_length = i + 1;
  }

  for(i = max_count; i > 0; i--) {
    printf("\n%3d|", i);
    for(j = 1; j <= max_length; j++) {
      if(length_counts[j-1] >= i) {
        printf("  #");
      } else {
        printf("   ");
      }
    }
  }

  printf("\n    ");
  for (i = 1; i <= max_length; i++) {
    printf("___");
  }
  printf("\n");

  printf("\n    ");
  for (i = 1; i<= max_length; i++) {
    printf("%3d", i);
  }

  return 0;
}
