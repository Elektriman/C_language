#include <stdio.h>
#include <stdlib.h>

struct myStruct{
    int i;
    char string[12] ;
};

int main()
{
    int i = 1 ;
    float f = 10.5 ;
    double b = 4.3 ;
    char c = 'A' ;
    char string[] = "ABCDEFGHIJ";
    void *p;
    struct myStruct structName;
    structName.i = 5 ;
    strcpy(structName.string , "012345678910");
    double array[] = {1.2, 2.3, 3.4} ;

    printf("sizeof(%d) is %d bytes \n", i, sizeof(i));
    printf("sizeof(%f) is %d bytes \n", f, sizeof(f));
    printf("sizeof(%f) is %d bytes \n", b, sizeof(b));
    printf("sizeof(%c) is %d bytes \n", c, sizeof(c));
    printf("sizeof(%s) is %d bytes \n", string, sizeof(string));
    printf("sizeof(%p) is %d bytes \n", p, sizeof(p));
    printf("sizeof(struct) is %d bytes \n", sizeof(structName));
    printf("sizeof(array) is %d bytes \n", sizeof(array));

    return 0;
}
