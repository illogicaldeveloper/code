//Compiler Link ... -lSDL2 -lm

#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char *argv[]) {
    SDL_Window *win = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *bitmapSurface = NULL;
    int posX = 100, posY = 100, width = 640, height = 480;
    SDL_Event event;

    int playerX = 100, playerY = 100;
    
    char title[256] = "Window For Drawing";    

    SDL_Init(SDL_INIT_VIDEO);

    win = SDL_CreateWindow( title, posX, posY, width, height, 0);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);

int quit = 0 ;

// ** sdl shortcuts
int putline( int x1, int y1, int x2, int y2 ) {
    SDL_RenderDrawLine(renderer, x1, y1, x2, y2 );
}
int putpxl( int x, int y ) {
    SDL_RenderDrawPoint( renderer, x, y );
}

int color( int r, int g, int b, int a ) {
    SDL_SetRenderDrawColor(renderer, r, g, b, a);        
}
// ** utilities
int drawBox(int x,int y,int w, int h) {    
    int xx = x, yy = y;
    for (yy=y;yy<y+h;yy++) putpxl( xx, yy );
    for (xx=x;xx<x+w;xx++) putpxl( xx, yy );
    for (yy=y+h;yy>y;yy--) putpxl( xx, yy );
    for (xx=x+w;xx>x;xx--) putpxl( xx, yy );
}
int drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3 ) {    
    putpxl( x1, y1 ); putpxl( x2, y2 ); putpxl( x3, y3 );
    putline( x1, y1, x2, y2 );
    putline( x2, y2, x3, y3 );
    putline( x3, y3, x1, y1 );
}

// ************************************************************** ;
int rasterize() {
  
    color ( 40, 40, 40, 40 );
    for (int y=1; y<47; y++) {
      for (int x=1; x<63; x++) {
        drawBox( x * 10, y*10, 10, 10 );
      };
    };

  color( 0xff, 0x00, 0x00, 0xff );
  drawBox( 100, 100, 50, 50 );
  color( 0x00, 0xff, 0x00, 0xff );
  drawBox( 600, 220, 25, 150 );
  color( 0x00, 0x00, 0xff, 0xff );
  drawTriangle( 210, 210, 300, 300, 300, 250 );


    putpxl( 100, 100 )

  color( 0x00, 0x00, 0x00, 0xff );
return 0; }
// ************************************************************** ;


while (!quit) {
        // SDL_WaitEvent(&event);
        SDL_Delay(20);
        SDL_PollEvent(&event);
        switch (event.type) { 
            case SDL_QUIT:
            quit = 1;
            break;
        }        
 
        SDL_RenderClear(renderer);
        
        rasterize();

        SDL_RenderPresent(renderer);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(win);

    SDL_Quit();

    return 0;
}