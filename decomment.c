#include <stdio.h>

/**
 * This file can use itself as input to test functionality
 */

int main(int argc, char *argv[])
{
    char c, c2;
    int in_comment = 0;
    /**
     * Let's try to put in a multiline
     * comment.
     */

    while((c = getchar()) != EOF) { // And some
        if(in_comment == 1) { // End-of-line comments
            if(c == '\n') {
                in_comment = 0;
                putchar(c);
            }
        } else if(in_comment == 2) {
            if(c == '*') {
                c2 = getchar();
                if(c2 == EOF) {
                    break;
                } else if(c2 == '/') {
                    in_comment = 0;
                }
            }
        } else /* and a block comment between the code*/ {
            if(c == '/') {
                c2 = getchar();
                if(c2 == EOF) {
                    break;
                } else if(c2 == '/') {
                    in_comment = 1;
                } else if(c2 == '*') {
                    in_comment = 2;
                } else {
                    putchar(c);
                    putchar(c2);
                }
            } else {
                putchar(c);
            }
        }
    }

    return 0;
}
