#include <stdio.h>

#define __align_64 __attribute__((__aligned__(1024)))

struct testalign {
        char a;
        char b;
        char c;
} __align_64 ;

int main()
{
        
        printf("%lu\n", sizeof(struct testalign));
}