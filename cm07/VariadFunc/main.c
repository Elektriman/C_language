#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void f(void){
    printf("passage dans f\n");
}
void g(void){
    printf("passage dans g\n");
}
void h(void){
    printf("passage dans h\n");
}

void myexit(void (*function)(void), ...){
    atexit(function);
    va_list ap;
    va_start(ap, function);
    void (*func)(void);
    do {
        func = va_arg(ap, void (*)(void)) ;
        if (func){
            atexit(func);
        }
    } while(func);

    va_end(ap);
}

int main()
{
    printf("pre myexit\n");
    myexit(f, g, h, NULL);
    printf("post myexit\n");
    return EXIT_SUCCESS;
}
