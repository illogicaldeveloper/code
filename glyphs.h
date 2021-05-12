int draw( float x, float y, char character ) {    

    if (character == 'a' || character == 'A') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
    };
    if (character == 'b' || character == 'B') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'c' || character == 'C') {
        putline( x, y, x, (y+10) );        
        putline( x, y, (x+10), y );        
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'd' || character == 'D') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'e' || character == 'E') {
        putline( x, y, x, (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'f' || character == 'F') {
        putline( x, y, x, (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );        
    };
    if (character == 'g' || character == 'G') {
        putline( x, (y+5), x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+5), (y+5) );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'h' || character == 'H') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );                
        putline( x, (y+5), (x+10), (y+5) );
    };
    if (character == 'i' || character == 'I') {
        putline( (x+5), y, (x+5), (y+10) );        
        putline( x, y, (x+10), y );        
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'j' || character == 'J') {
        putline( (x+5), y, (x+5), (y+10) );        
        putline( x, y, (x+10), y );        
        putline( x, (y+5), (x+5), (y+10) );        
    };
    if (character == 'k' || character == 'K') {
        putline( x, y, x, (y+10) );
        putline( x, (y+5), (x+10), y );
        putline( x, (y+5), (x+10), (y+10) );
    };
    if (character == 'l' || character == 'L') {
        putline( x, y, x, (y+10) );                
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'm' || character == 'M') {
        putline( x, y, x, (y+10) );                
        putline( x, y, (x+5), (y+10) );
        putline( (x+10), y, (x+5), (y+10) );
        putline( (x+10), y, (x+10), (y+10) );                
    };
    if (character == 'n' || character == 'N') {
        putline( x, y, x, (y+10) );                
        putline( x, y, (x+10), (y+10) );
        putline( (x+10), y, (x+10), (y+10) );                
    };
    if (character == 'o' || character == 'O') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'p' || character == 'P') {
        putline( x, y, x, (y+10) );
        putline( (x+10), (y), (x+10), (y+5) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
    };
    if (character == 'q' || character == 'Q') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+10), (x+10), (y+10) );
        putline( (x+5), (y+5), (x+10), (y+10) );
    };
    if (character == 'r' || character == 'R') {
        putline( x, y, x, (y+10) );
        putline( (x+10), (y), (x+10), (y+5) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
        putline( (x+5), (y+5), (x+10), (y+10) );
    };
    if (character == 's' || character == 'S') {
        putline( x, y, x, (y+5) );
        putline( (x+10), (y+5), (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 't' || character == 'T') {
        putline( (x+5), y, (x+5), (y+10) );        
        putline( x, y, (x+10), y );                
    };
    if (character == 'u' || character == 'U') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );                
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == 'v' || character == 'V') {
        putline( x, y, (x+5), (y+10) );
        putline( (x+10), y, (x+5), (y+10) );
    };
    if (character == 'w' || character == 'W') {
        putline( x, y, x, (y+10) );                
        putline( (x+10), y, (x+10), (y+10) );                
        putline( x, y+(10), (x+5), y);
        putline( (x+10), y+(10), (x+5), y);
    };
    if (character == 'x' || character == 'X') {
        putline( x, y, (x+10),(y+10) );
        putline( (x+10), y, x, (y+10) ); 
    };
    if (character == 'y' || character == 'Y') {
        putline( x, y, (x+5), (y+5) );
        putline( (x+10), y, (x+5), (y+5) );
        putline( (x+5),(y+5),(x+5),(y+10));
    };
    if (character == 'z' || character == 'Z') {
        putline( x, y, (x+10), y);
        putline( x, (y+10), (x+10), (y+10));
        putline(x,(y+10), (x+10),y);
    };

    if (character == '1') {
        putline( (x+5), y, (x+5), (y+10) );
        putline( (x+5), y, (x), (y+5) );
        putline( (x), (y+10), (x+10), (y+10) );
    };
    if (character == '2') {
        putline( x, y, x+10, y );
        putline( (x+10), y, (x+10), (y+5) );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+5), x, (y+10) );
        putline( x, (y+10), x+10, (y+10) );
    };
    if (character == '3') {
        putline( x, y, x+10, y );
        putline( (x+10), y, (x+10), (y+5) );
        putline( x, (y+5), (x+10), (y+5) );
        putline( (x+10), (y+5), (x+10), (y+10) );
        putline( x, (y+10), x+10, (y+10) );
    };
    if (character == '4') {
        putline( x, y, x, (y+5) );
        putline( (x+10), y, (x+10), (y+10) );
        putline( x, (y+5), (x+10), (y+5) );
    };
    if (character == '5') {
        putline( x, y, x, (y+5) );
        putline( (x+10), (y+5), (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+10), (x+10), (y+10) );
    };
    if (character == '6') {
        putline( x, y, x+10, y );
        putline( (x), y, (x), (y+5) );
        putline( x, (y+5), (x+10), (y+5) );
        putline( x, (y+5), x, (y+10) );
        putline( x, (y+10), x+10, (y+10) );
        putline( (x+10), (y+5), (x+10), (y+10) );
    };
    if (character == '7') {
        putline( x, y, (x+10), y );
        putline( (x+7), (y+10), (x+10), y ); 
    }
    if (character == '8') {
        putline( x, y, x, (y+10) );
        putline( x, y, x+10, y );
        putline( (x+10), y, (x+10), (y+5) );
        putline( x, (y+5), (x+10), (y+5) );
        putline( (x+10), (y+5), (x+10), (y+10) );
        putline( x, (y+10), x+10, (y+10) );
    };
    if (character == '9') {
        putline( x, y, x, (y+5) );
        putline( x, y, x+10, y );
        putline( (x+10), y, (x+10), (y+5) );
        putline( x, (y+5), (x+10), (y+5) );
        putline( (x+10), (y+5), (x+10), (y+10) );
        putline( x, (y+10), x+10, (y+10) );
    };
    if (character == '0') {
        putline( x, y, x, (y+10) );
        putline( (x+10), y, (x+10), (y+10) );        
        putline( x, y, (x+10), y );
        putline( x, (y+10), (x+10), (y+10) );
    };

    if (character == '.') {
        putline( (x+3), (y+10), (x+8), (y+10) );
    };


}