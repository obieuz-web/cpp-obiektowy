#include <graphics.h>
#include <iostream>
#include "include/CStar.h"
using std::cout;
using std::endl;
int main(void)
{
    int maxX, maxY;
    CStar G1(100,100,50,20,0);
    initwindow(800,600);
    maxX=getmaxx();
    maxX=getmaxy();

    G1.Rysuj();
    while(!kbhit()){
        G1.Obrot();
        delay(20);
        cleardevice();
    }
    closegraph();
}
