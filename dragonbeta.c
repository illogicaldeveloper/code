#include "functions.h"
#include "ini.h"

FILE *fp; FILE *fptr;

void write(char *text) {
    fprintf(fptr, "%s", text );
};

void doInk( char *linedata ) {
    
    char first[128], second[128];
    char gather[512];
    int a = 0, b = 0, onoff = 0;
    first[a++] = '"';

    for (int i =0; i<strlen(linedata); i++) {
        if (onoff) {
            if (linedata[i] != '"' && linedata[i] != '[' && linedata[i] != ']') {
                first[a++] = linedata[i];
            }            
        } else {
            if (i >= 4) {
                if (linedata[i] != '"' && linedata[i] != '[' && linedata[i] != ']') {
                    second[b++] = linedata[i];
                }
            }
        }
        if (linedata[i] == '"' || linedata[i] == '[' || linedata[i] == ']') {
            if (onoff == 0) { onoff = 1;
            } else { onoff = 0; }
            if (linedata[i] == '[') {
                first[a++] = '%'; second[b++] = ',';
            }
        }
    }    
    
    first[a++] = '"'; first[a++] = '\0'; second[b++] = '\0';
    rem(second,";");
    sprintf(gather, "printf(%s%s);\n", first,second);
    write( gather );
}

void goInclude( char *linedata ) {
    write( "#include " );
    char gather[512]; int a = 0, b = 0;
    
    for (int i =0; i <strlen(linedata); i++) {
        if (linedata[i] == ',') { 
            gather[a++] = '>';
            gather[a++] = '\n'; gather[a++] = '#';
            gather[a++] = 'i'; gather[a++] = 'n';
            gather[a++] = 'c'; gather[a++] = 'l';
            gather[a++] = 'u'; gather[a++] = 'd';
            gather[a++] = 'e'; gather[a++] = ' ';
            gather[a++] = '<';
        } else {
            if (linedata[i] != ' ') gather[a++] = linedata[i];
        }        
    }

    write( gather );
}

void formatLoop( char *linedata ) {
    write( "for (int X=0; X<Y; X++) {" );    
}

int main( int argc, char *argv[] ) {

    char *output = NULL, *line = NULL;
    size_t len = 0, read = 0;
    
    int definer = 0;

    char outputFormat[128];

    fp = fopen(argv[1], "r");    
    fptr = fopen(argv[2], "w");    

    printf( "\nCompilation Started ." );

    while ((read = getline(&line, &len, fp)) != -1) {
        trim(line);    
        if (line[0] != '\0') {                      
         if (line[0] == '@') {
             write( "int main( int argc, char *argv[] ) {\n" );
             rem(line,"@");
             rem(line,"{");
             write( line );
         } else if (line[0] == 'l' && line[1] == 'o' && line[2] == 'o' && line[3] == 'p' && line[4] == ' ') {
             formatLoop( line );
         } else if (line[0] == '<' && line[strlen(line)-1] == '>') {             
             goInclude( line );             
         } else if (line[0] == 'i' && line[1] == 'n' && line[2] == 'k' && (line[3] == ' ' || line[3] == '"')) {
            doInk( line );
         } else {
            write( line );
            write( ";" );
         }
            write( "\n" );
        }
    }

    fclose(fp); fclose(fptr);
    printf( "\nCompilation Completed .\n\n" );

    
    return 0;    
}