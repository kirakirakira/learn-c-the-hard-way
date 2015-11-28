#include <stdio.h>

// typedef struct
// {
//     int thing;
//     long thing2;
//     char someOtherThing;
//     char yetAnotherThing;
// } Message_t;

// ((Message_t)bytes)->thing2

int main(void) {
    
    // char name[sizeof(int)] = { 'a', 'b', 'c', 'd' };
    char *name = "abcd";
    // int number = (name[0] << 24) + (name[1] << 16) + (name[2] << 8) + name[3];

    printf("number: %d \n", *((int *)name));

    return 0;
}