
#include <stdio.h>

int main() {
    char input[128];
    printf( "COMMAND: " );
    scanf( "%127[^\n]", input );
    printf( "-+> {%s} \n", input );
    return 0;
}