#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("The value of 'EOF' is %d\n", EOF);

  int i;
  long l;
  printf("The size of an int is %d\n", sizeof(i));
  printf("The size of a long is %d\n", sizeof(l));
}
