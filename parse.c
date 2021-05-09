#include <stdio.h>
#include <string.h>

char split[100][256];
void parse(char *string, char element) {    
    int which = 0, count = 0;
    for (int i=0; i<strlen(string);i++) {
        if ( string[i] == element ) {
            which ++; count = 0;
        } else {
            splits[which][count++] = string[i];
        }
    }    
}

int main() {    
    parse( "one two three four", ' ' );
    printf( "%s %s %s", split[3], split[2], split[1] );
    return 0;
}