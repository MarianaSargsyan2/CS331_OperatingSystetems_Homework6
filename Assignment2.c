#include <stdio.h>

struct FirstStruct {
    double c;
    int b;
    char a;  
};

int main(void) {
    struct FirstStruct struct1;

    printf("Size of struct: %zu bytes\n", sizeof(struct1));

    printf("Address of a: %p\n", (void *)&struct1.a);
    printf("Address of b: %p\n", (void *)&struct1.b);
    printf("Address of c: %p\n", (void *)&struct1.c);


    return 0;
}