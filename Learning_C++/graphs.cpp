#include <graphics.h>
#include <conio.h>
int graph(int X, int Y, int radius);
int main()
{
    int a=0,b=0,c=0;
    for(int i=0; i<100; i++){
    graph(a,b,c);
    a+= 1;
    b+= 1;
    c+= 1;
    }// Adjusted center and radius
    getch();               // Wait for key press before closing
    closegraph();
    return 0;
}

int graph(int X, int Y,int radius){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c://turbo/bgi");
    circle(X,Y, radius);
}