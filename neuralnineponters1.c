

#include <stdio.h>

// https://www.youtube.com/watch?v=Hb-bmAmbwvo&list=PL7yh-TELLS1GafZOVHhCPaCQUt8HrfCZE&index=9

int main() {
    // an INT takes 4 bytes
    // 0x0 0x1 0x2 0x3 = 1first INT
    // 0x4 0x5 0x6 0x7 = 2nd int   
    
    int a = 10;
    int b = 20;
    char c = 'A';
    int d = 20;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%c\n", c);
    printf("%d\n", d);
    

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("those are not pointers\nthey are memory addresses\npra saber quem sao os char e os Int, You have to setup HEXADECIMAL mindset to understand whats going on here.\n");
    
    getch();
    
    return 0;
}

/*
output:
10
20
A
20
0x7ffd31a56dec
0x7ffd31a56de8
0x7ffd31a56de7
0x7ffd31a56de0
those are not pointers
they are memory addresses

pra saber quem sao os char e os Int, You have to setup HEXADECIMAL 
mindset to understand whats going on here.*/
