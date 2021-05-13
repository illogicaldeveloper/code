#include <stdio.h>
#include <string.h>

int compare(char *string1, char *string2 ) {
    int len = strlen(string1);
    if (len != strlen(string2)) return 0;
    for (int i=0; i<(len); i++) {
        if ((string1[i] != string2[i]) 
            || (string1[len-i] != string2[len-i]))
                return 0;
    } return 1 ;
}

int main() {

    char string1[] = "testing";    

    if (compare( string1, "testing" )) {
        printf( "They Are Equal" );
    }
    
    printf( "\n" );
    return 0;

}
