#include <graphics.h>
#include "../include/CBlob.h"

TPoint CBlob::LT_border = {0, 0};
TPoint CBlob::RB_border = {100, 100};
bool CBlob::Splashing = false;
bool CBlob::Moving = false;

CBlob::CBlob() {

    X = rand()%200+100;
    Y = rand()%200+100;

    maxSize = rand()%200+100;
    minSize = 50;
    Height = minSize;
    Width = minSize;
    dS=rand()%10+5;


    do {
        dX=rand()%10-5;
    } while (!dX);

    do {
        dY=rand()%10-5;
    } while (!dY);

    color = rand()%7+7;

    SizeDirection=true;
}


void CBlob::SetRB_border(int x, int y)
{
    RB_border = {x, y};
}

void CBlob::SetLT_border(int x, int y)
{
    LT_border = {x, y};
}

void CBlob::ExecuteMovements() {

    if (CBlob::Splashing)
        DoSplashing();

    if (CBlob::Moving)
        Move();

    Draw();
}

void CBlob::Draw() {
    setcolor(color);
    ellipse(X,Y,0,360,Width/2,Height/2);
}

void CBlob::DoSplashing() {

    if (Size>maxSize) {
        dS=-dS;
    }
    Size += dS;

    if (SizeDirection) {
       Height=Size;
       if (Height<minSize) {
            Height=minSize;
            SizeDirection=!SizeDirection;
            dS=abs(dS);
       }
    }
    else {
        Width=Size;
        if (Width<minSize) {
            Width=minSize;
            SizeDirection=!SizeDirection;
            dS=abs(dS);
        }
    }

}

void CBlob::Move() {
    int halfWidth = Width/2;
    int halfHeight= Height/2;
    if ((X-halfWidth+dX)<LT_border.x || (X+halfWidth+dX)>RB_border.x)
        dX*=-1;
    if ((Y-halfHeight+dY)<LT_border.y || (Y+halfHeight+dY)>RB_border.y)
        dY*=-1;
    X+=dX;
    Y+=dY;
}


