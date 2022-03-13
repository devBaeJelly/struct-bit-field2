#include <stdio.h>

struct Flags {

    union
    {
        struct
        {
            unsigned int a : 3;
            unsigned int b : 4;
            unsigned int c : 7;
            unsigned int d : 2;
        };
        unsigned int e;
    };

};


int main()
{
    struct Flags f1 = { 0, };

    f1.a = 4;
    f1.b = 8;
    f1.c = 64;
    f1.d = 3;

    printf("%u\n", f1.e);

    return 0;
}