#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }
    
    unsigned char toUpper(unsigned char c){
        if (c >= 97 && c <= 122) return c - 32;
        return c;
    }
    
    unsigned char toLower(unsigned char c){
        if (c >= 65 && c <= 90) return c + 32;
        return c;
    }

    int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        
        switch(toLower(letter)) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            
            case 'e':
                printf("%d: 'E'\n", i);
                break;   
            
            case 'i':
                printf("%d: 'I'\n", i);
                break;
                
            case 'o':
                printf("%d: 'O'\n", i);
                break;
                
            case 'u':
                printf("%d: 'U'\n", i);
                break;
                
            case 'y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'U'\n", i);
                }
                break;
                
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }
    return 0;
}