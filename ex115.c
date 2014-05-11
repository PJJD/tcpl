#include <stdio.h>

main(int argc, char *argv[])
{
  int fahr;

  float fahrenheittocelsius(int temp)
  {
    return (5.0/9.0) * (temp - 32);
  }

  for (fahr = 0; fahr <= 300; fahr += 20) {
    printf("%3d\t%6.1f\n", fahr, fahrenheittocelsius(fahr));
  }

}
