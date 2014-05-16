#include <stdio.h>

int htoi(char s[]);

int main(int argc, char *argv[]) {
    printf("\n0x2ac = %d", htoi("0x2ac"));
    printf("\n0x4e = %d", htoi("0x4e"));
    printf("\n0X01B = %d", htoi("0X01B"));
    printf("\n1B = %d", htoi("1B"));
    printf("\n01b = %d", htoi("01b"));
    printf("\n01X = %d", htoi("01X"));

    return 0;
}

int htoi(char s[])
{
    int i, j, result, base;
    i = result = base = 0;

    while(s[i] != '\0') {
        i++;
    }

    for(j = 0; j < i; j++) {
        switch(s[j]) {
            case '0':
                base = 0;
                break;
            case '1':
                base = 1;
                break;
            case '2':
                base = 2;
                break;
            case '3':
                base = 3;
                break;
            case '4':
                base = 4;
                break;
            case '5':
                base = 5;
                break;
            case '6':
                base = 6;
                break;
            case '7':
                base = 7;
                break;
            case '8':
                base = 8;
                break;
            case '9':
                base = 9;
                break;
            case 'a':
            case 'A':
                base = 10;
                break;
            case 'b':
            case 'B':
                base = 11;
                break;
            case 'c':
            case 'C':
                base = 12;
                break;
            case 'd':
            case 'D':
                base = 13;
                break;
            case 'e':
            case 'E':
                base = 14;
                break;
            case 'f':
            case 'F':
                base = 15;
                break;
            case 'x':
            case 'X':
                if(j == 1)
                    break;
            default:
                return -1;
        }
        result = (16 * result) + base;
    }

    return result;
}


