#include <stdio.h>
#include <stdlib.h>

int compare_int(void *a, void *b){
    return *(int*)a - *(int*)b ;
}

void shutdown(){
    printf("\nsortie du programme\n");
}

int main()
{
    int array[] = {1,3,5,7,9,0,2,4,6,8} ;
    int l = sizeof(array)/sizeof(*array) ;

    for(unsigned int i= 0; i<l; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");

    qsort(array, l, sizeof(*array), compare_int);

    for(unsigned int i= 0; i<l; i++){
        printf("%d ", *(array+i));
    }
    printf("\n");

    int tofind = 10 ;
    int *res = bsearch(&tofind, array, l, sizeof(*array), compare_int);

    printf("%p, %p\n", &tofind, res);

    atexit(shutdown);
    printf("entre atexit et return\n");

    return EXIT_SUCCESS;
}
