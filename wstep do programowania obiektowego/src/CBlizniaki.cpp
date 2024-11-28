#include "graphics.h"
#include "../include/CBlizniaki.h"
int CBlizniaki::LGx=0, CBlizniaki::LGy=0,CBlizniaki::PDx=210, CBlizniaki::PDy=210;
CBlizniaki::CBlizniaki(int _X1, int _Y1, int _R1,int _X2, int _Y2, int _R2)
{
    X1=_X1;
    Y1=_Y1;
    R1=_R1;
    X2=_X2;
    Y2=_Y2;
    R2=_R2;
    do{
    dX1=rand()%11-5;
    }while(!dX1);
    do{
    dY1=rand()%11-5;
    }while(!dY1);
    do{
    dX2=rand()%11-5;
    }while(!dX2);
    do{
    dY2=rand()%11-5;
    }while(!dY2);
}

CBlizniaki::~CBlizniaki()
{
    //dtor
}
void CBlizniaki::Rysuj(){
    setcolor(14);
    setfillstyle(SOLID_FILL, 14);
    fillellipse(X1,Y1,R1,R1);
    fillellipse(X2,Y2,R2,R2);
    line(X1,Y1,X2,Y2);
}
void CBlizniaki::Ruch(){
    if(((X1-R1+dX1)<LGx)||((X1+R1+dX1)>PDx)){
        dX1*=-1;
    }
    if(((Y1-R1+dY1)<LGy)||((Y1+R1+dY1)>PDy)){
        dY1*=-1;
    }
    X1+=dX1;
    Y1+=dY1;
    if(((X2-R2+dX2)<LGx)||((X2+R2+dX2)>PDx)){
        dX2*=-1;
    }
    if(((Y2-R2+dY2)<LGy)||((Y2+R2+dY2)>PDy)){
        dY2*=-1;
    }
    X2+=dX2;
    Y2+=dY2;
    Rysuj();
}
