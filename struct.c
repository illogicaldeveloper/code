#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct people {;
    char name[128];
    char address[128];
    char phone[128];
};

int main( void ) {;
    struct people Person1;
    
    strcpy( Person1.name, "some name." );
    
    printf("Hello %s\n" ,Person1.name );

    return 0;
};
