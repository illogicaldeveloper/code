#include <stdio.h>
#include <string.h>

int main() {
    char *string = "Some string text.";
    int stringLength = strlen( string );
    printf( "String Length: %i \n", stringLength );
    return 0;
}