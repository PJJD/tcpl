#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;
    int i, lim;
    lim = 1000;

    while(i < lim -1) {
        if((c = getchar()) != '\n') {
            if(c != EOF) {
                putchar(c);
            }
        } else {
            putchar('\n');
        }
        i++;
    }

    return 0;
}
