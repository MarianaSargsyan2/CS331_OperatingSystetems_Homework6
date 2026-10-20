#include <stdio.h>

int main(void) {
    int num = 10;
    char symbol = 'A';
    double numDouble = 1.5;
    short numShort = 10;

    printf("Size of int is: %zu bytes\n", sizeof(num));
    printf("Size of char is: %zu bytes\n", sizeof(symbol));
    printf("Size of double is: %zu bytes\n", sizeof(numDouble));
    printf("Size of short is: %zu bytes\n", sizeof(numShort));

    printf("Address of int is: %p\n", (void*)&num);
    printf("Address of char is: %p\n", (void*)&symbol);
    printf("Address of double is: %p\n", (void*)&numDouble);
    printf("Address of short is: %p\n", (void*)&numShort);


    return 0;
}