#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main(int argc, char *argv[])
{
    char s1[10] = "abcdefghij";
    char s2[5] = "aeoui";

    printf("\n%s", s1);
    printf("\n%s", s2);

    squeeze(s1, s2);

    printf("\n%s", s1);
    printf("\n%s", s2);

    return 0;
}


void squeeze(char s1[], char s2[])
{
    int i, j, k, skip;

    skip = 0;

    for(i = j = 0; s1[i] != '\0'; i++) {
        for(k = 0; s2[k] != '\0'; k++) {
            if(s1[i] == s2[k]) {
                skip = 1;
            }
        }

        if(!skip) {
            s1[j++] = s1[i];
        }

        skip = 0;
    }
    s1[j] = '\0';
}

