#include <graphics.h>
#include <iostream>
using std::cout;
int main( )
{
    initwindow(500, 500, "First Sample");
    int x,y;
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
            bar(200,200,400,400);
            setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
            line(180, 220, 300, 100);
            line(300, 100, 420, 220);
            delay(100000);
    return 0;
}
