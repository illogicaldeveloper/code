#include <stdio.h>
#include <stdlib.h>

int main() {

    char *string = "It Works.";

    FILE *fptr;    
    fptr = fopen("output.txt", "w");

    if (fptr != NULL) {
        fprintf(fptr, "%s", string);
    } else {        
        printf("Error!");
        exit(1);
    }
    
    fclose(fptr);
    return 0;
}