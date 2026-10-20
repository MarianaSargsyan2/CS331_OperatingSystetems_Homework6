#include <stdio.h>

#pragma pack(1)
struct Struct1 {
    char a;
    int b;
    double c;
};

int main(void) {
    struct Struct1 struct1;

    printf("The size of struct is: %zu bytes\n", sizeof(struct1));

    printf("Address of a is: %p\n", (void *)&struct1.a);
    printf("Address of b is: %p\n", (void *)&struct1.b);
    printf("Address of c is: %p\n", (void *)&struct1.c);

    return 0;
}