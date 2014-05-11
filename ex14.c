
#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;    /* lower limit of temp table */
  upper = 300;  /* upper limit of temp talbe */
  step  = 20;   /* step size */

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius / 5 * 9) + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
