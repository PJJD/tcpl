#include <stdio.h>

int any(char s1[], char s2[]);

int main(int argc, char *argv[])
{
    char s1[20] = "Dit is een test!";
    char s2[5] = "01234";
    printf("\nDe eerste letter van '%s' komt in '%s' voor op positie %d", s2, s1, any(s1, s2));

    s2[4] = 'D';
    printf("\nDe eerste letter van '%s' komt in '%s' voor op positie %d", s2, s1, any(s1, s2));

    s2[4] = '4';
    s2[2] = ' ';
    printf("\nDe eerste letter van '%s' komt in '%s' voor op positie %d", s2, s1, any(s1, s2));

    s2[2] = '!';
    s1[0] = '?';
    printf("\nDe eerste letter van '%s' komt in '%s' voor op positie %d", s2, s1, any(s1, s2));

    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for(i = 0; s1[i] != '\0'; i++) {
        for(j = 0; s2[j] != '\0'; j++) {
            if(s1[i] == s2[j]) {
                return i;
            }
        }
    }

    return -1;
}
