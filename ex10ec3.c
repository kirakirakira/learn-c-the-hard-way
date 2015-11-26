#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 1;
    
    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
        int j = 0;
        char letter = 0;
        for (j = 0; letter = argv[i][j], letter != '\0'; j++) {
            
            switch(letter) {
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", j);
                    break;
                
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", j);
                    break;   
                
                case 'i':
                case 'I':
                    printf("%d: 'I'\n", j);
                    break;
                    
                case 'o':
                case 'O':
                    printf("%d: 'O'\n", j);
                    break;
                    
                case 'u':
                case 'U':
                    printf("%d: 'U'\n", j);
                    break;
                    
                case 'y':
                case 'Y':
                    if (j > 2) {
                        // it's only sometimes Y
                        printf("%d: 'U'\n", j);
                    }
                    break;
                    
                default:
                    printf("%d: %c is not a vowel\n", j, letter);
            }
        }
    }
    return 0;
}