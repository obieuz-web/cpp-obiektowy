#include "../include/CKwadrat.h"
#include <graphics.h>
#include <iostream>

bool CKwadrat::horyzontalnie=false,CKwadrat::vertykalnie=false,CKwadrat::normalnie=false,CKwadrat::kolorZmiana=false;
CKwadrat::CKwadrat()
{
    X=rand()%600;
    Y=rand()%400+100;
    kolor=rand()%15+1;
    odstepX=100;
    odstepY=200;

    dX=10;
    dY=10;
    dOdstepX=-2;
    dOdstepY=2;

    domyslnyOdstepX=odstepX;
    domyslnyOdstepY=odstepY;

}

CKwadrat::~CKwadrat()
{
    std::cout<<"\nUsunieto prostokat";
}
void CKwadrat::Rysuj()
{
    setcolor(kolor);
    rectangle(X-odstepX/2,Y-odstepY/2,X+odstepX/2,Y+odstepY/2);
}
void CKwadrat::Ruch()
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

void CKwadrat::RuchHoryzontalny()
{
    if(odstepX<2){
        dOdstepX*=-1;
    }
    if(domyslnyOdstepX<odstepX+dOdstepX){
        dOdstepX*=-1;
    }
    odstepX+=dOdstepX;
}

void CKwadrat::RuchVertykalny()
{
    if(odstepY>domyslnyOdstepY){
        dOdstepY*=-1;
    }
    if(odstepY+dOdstepY<2){
        dOdstepY*=-1;
    }
    odstepY+=dOdstepY;
}

void CKwadrat::Zmienkolor()
{
    kolor=rand()%15+1;
}

void CKwadrat::Oblicz()
{
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

