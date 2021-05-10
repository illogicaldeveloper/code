
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
    
int randomNumber(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

void gotoxy(int x,int y) {
    printf("%c[%d;%df",0x1B,y,x);
}

void color(char *strColor) {
    if (strcmp(strColor,"default") == 0) printf( "\033[0;0m" );
    if (strcmp(strColor,"black") == 0) printf( "\033[0;30m" );
    if (strcmp(strColor,"red") == 0) printf( "\033[0;31m" );
    if (strcmp(strColor,"green") == 0) printf( "\033[0;32m" );
    if (strcmp(strColor,"yellow") == 0) printf( "\033[0;33m" );
    if (strcmp(strColor,"blue") == 0) printf( "\033[0;34m" );
    if (strcmp(strColor,"purple") == 0) printf( "\033[0;35m" );
    if (strcmp(strColor,"cyan") == 0) printf( "\033[0;36m" );
    if (strcmp(strColor,"yellow") == 0) printf( "\033[0;37m" ); 
}

void cls() {
    system( "clear || cls" );
}
