
#include <stdio.h>

int main() {
    char input[128];
    printf( "COMMAND: " );
    fgets( input, 128, stdin ); 
    printf( "-+> {%s} \n", input );
    return 0;
}
