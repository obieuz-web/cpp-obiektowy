#include "../include/CProstokat.h"
#include <graphics.h>
#include <iostream>
#include <cmath>
#define M_PI    3.14159265358979
#define M_PI_3  1.04719755119660
CProstokat::CProstokat()
{
    X=rand()%600;
    Y=rand()%400+100;
    kolor=rand()%15+1;
    odstepX=rand()%100+40;
    odstepY=rand()%100+40;

    dX=rand()%5+1;
    dY=rand()%5+1;
    dOdstepX=-2;
    dOdstepY=2;
//    Angle=0.0;
//    dAngle=30.0;
    domyslnyOdstepX=odstepX;
    domyslnyOdstepY=odstepY;

    horyzontalnie=false;
    vertykalnie=false;
    normalnie=false;
    kolorZmiana=false;
    isActive=false;



//    ObliczPunkty();
}
//void CProstokat::ObliczPunkty()
//{
//    pkty[0].X=X-odstepX/2;
//    pkty[0].Y=Y-odstepY/2;
//    pkty[1].X=X+odstepX/2;
//    pkty[1].Y=Y-odstepY/2;
//    pkty[2].X=X+odstepX/2;
//    pkty[2].Y=Y+odstepY/2;
//    pkty[3].X=X-odstepX/2;
//    pkty[3].Y=Y+odstepY/2;
//}
CProstokat::~CProstokat()
{
    std::cout<<"\nUsunieto prostokat";
}
void CProstokat::Rysuj()
{
    setcolor(kolor);
    rectangle(X-odstepX/2,Y-odstepY/2,X+odstepX/2,Y+odstepY/2);
}
void CProstokat::Ruch()
{
    if(((X-odstepX/2+dX)<0)||((X+odstepX/2+dX)>800)){
        dX*=-1;
    }
    if(((Y-odstepY/2+dY)<0)||((Y+odstepY/2+dY)>600)){
        dY*=-1;
    }
    X+=dX;
    Y+=dY;
}

void CProstokat::RuchHoryzontalny()
{
    if(odstepX<2){
        dOdstepX*=-1;
    }
    if(domyslnyOdstepX<odstepX+dOdstepX){
        dOdstepX*=-1;
    }
    odstepX+=dOdstepX;
}

void CProstokat::RuchVertykalny()
{
    if(odstepY>domyslnyOdstepY){
        dOdstepY*=-1;
    }
    if(odstepY+dOdstepY<2){
        dOdstepY*=-1;
    }
    odstepY+=dOdstepY;
}

void CProstokat::Zmienkolor()
{
    kolor=rand()%15+1;
}

void CProstokat::Oblicz()
{
    //Obrot();
    if(normalnie){
        Ruch();
    }
    if(horyzontalnie){
        RuchHoryzontalny();
    }
    if(vertykalnie){
        RuchVertykalny();
    }
    if(kolorZmiana){
        Zmienkolor();
    }
    Rysuj();
}
