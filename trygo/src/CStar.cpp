#include "../include/CStar.h"
#include <graphics.h>
#include <math.h>
#include <iostream>
#define M_PI    3.14159265358979
#define M_PI_3  1.04719755119660
#define M_PI_6  0.52359877559830
CStar::CStar(int _X, int _Y, int _Rd, int _Rm, double _Angle)
{
    X=_X;
    Y=_Y;
    Rd=_Rd;
    Rm=_Rm;
    Angle=_Angle;
    dX=10;
    dY=10;
    dD=3;
    dAngle=M_PI/100.0;
    Oblicz();
}

CStar::~CStar()
{
    //dtor
}
void CStar::Rysuj(){
    int i;
    moveto(pkty[0].x,pkty[0].y);
    for(i=1;i<12;i++){
        lineto(pkty[i].x,pkty[i].y);
    }
    lineto(pkty[0].x,pkty[0].y);

}
void CStar::Oblicz(){
    int i;
    double alfa;
    if(((X-Rd+dX)<0)||((X+Rd+dX)>800)){
        dX*=-1;
    }
    if(((Y-Rd+dY)<0)||((Y+Rd+dY)>600)){
        dY*=-1;
    }
    X+=dX;
    Y+=dY;
    if(Rd>70){
        dD*=-1;
    }else if(Rd<30){
        dD*=-1;
    }
    Rd+=dD;
    Rm+=dD;
    for(i=0;i<6;i++){
        alfa= Angle+i*M_PI_3;
        pkty[i+i].x=X+Rd*cos(alfa);
        pkty[i+i].y=Y+Rd*sin(alfa);
        alfa+=M_PI_6;
        pkty[i+i+1].x=X+Rm*cos(alfa);
        pkty[i+i+1].y=Y+Rm*sin(alfa);
    }

}
void CStar::Obrot(){
    Angle += dAngle;
    Oblicz();
    Rysuj();

}
