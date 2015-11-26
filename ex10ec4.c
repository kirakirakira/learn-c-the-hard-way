#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }
    
    int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) {
        
        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        }
        else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        }
        else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        }
        else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        }
        else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        }
        else if (letter == 'y' || letter == 'Y') {
            if (i > 2) {
                printf("%d: 'Y'\n", i);
            }
        }
        else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}