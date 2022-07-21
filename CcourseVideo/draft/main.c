#include <stdio.h>
#include <stdlib.h>

int main(){

    char line[255];
    FILE *fpointer = fopen("test.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);

    return EXIT_SUCCESS;
}
