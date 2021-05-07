
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fp; char *line = NULL;
    size_t len = 0; ssize_t read;    

    fp = fopen("./data.txt", "r");
    if (fp == NULL) exit( EXIT_FAILURE );

    while ((read = getline(&line, &len, fp)) != -1) {
        for (int i=0; i<strlen(line); i++) {
            printf( "%c", line[i] );
        }
    }

    fclose(fp); printf( "\n" );

    if (line) free(line);
    exit( EXIT_SUCCESS );
}