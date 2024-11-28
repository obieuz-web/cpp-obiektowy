#include "graphics.h"
#include "../include/Cpileczka.h"
int CPileczka::LGx=0, CPileczka::LGy=0,CPileczka::PDx=210, CPileczka::PDy=210;
CPileczka::CPileczka(int _X, int _Y, int _R, int _kolor){
    X=_X;
    Y=_Y;
    R=_R;
    kolor=_kolor;
    do{
    dX=rand()%11-5;
    }while(!dX);
    do{
    dY=rand()%11-5;
    }while(!dY);
}
CPileczka::CPileczka(){
    X=20;
    Y=20;
    R=rand()%10+5;
    kolor=rand()%15;
    do{
    dX=rand()%11-5;
    }while(!dX);
    do{
    dY=rand()%11-5;
    }while(!dY);
}
CPileczka::~CPileczka()
{
    //dtor
}
void CPileczka::Rysuj(){
    setcolor(kolor);
    setfillstyle(SOLID_FILL, kolor);
    fillellipse(X,Y,R,R);
}
void CPileczka::Ruch(){
    if(((X-R+dX)<LGx)||((X+R+dX)>PDx)){
        dX*=-1;
    }
    if(((Y-R+dY)<LGy)||((Y+R+dY)>PDy)){
        dY*=-1;
    }
    X+=dX;
    Y+=dY;
    Rysuj();
}
void CPileczka::Kasuj(){
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    fillellipse(X,Y,R,R);
}
