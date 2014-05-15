#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
    printf("\nMin signed char: %d", CHAR_MIN);
    printf("\nMax signed char: %d", CHAR_MAX);
    printf("\nMax unsigned char: %u", UCHAR_MAX);
    printf("\nMin signed short: %d", SHRT_MIN);
    printf("\nMax signed short: %d", SHRT_MAX);
    printf("\nMax unsigned short: %u", USHRT_MAX);
    printf("\nMin signed int: %d", INT_MIN);
    printf("\nMax signed int: %d", INT_MAX);
    printf("\nMax unsigned int: %u", UINT_MAX);
    printf("\nMin signed long: %ld", LONG_MIN);
    printf("\nMax signed long: %ld", LONG_MAX);
    printf("\nMax unsigned long: %lu", ULONG_MAX);
    printf("\nMin float: %f", FLT_MIN);
    printf("\nMax float: %f", FLT_MAX);
    printf("\nMin double: %f", DBL_MIN);
    printf("\nMax double: %f", DBL_MAX);

    return 0;
}


