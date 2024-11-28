#include "include/CProstokat.h"
#include "include/CProstokatPudelko.h"
#include <graphics.h>
#include <iostream>
#include <winuser.h>
int main(void)
{
    CProstokatPudelko pudelko;
    initwindow(800,600);
    char key;
    std::cout<<"+ dodaje prostokat \n- odejmij prostokat\n- wybierz nastepny prostokat\n- powroc do poprzedniego prostokata\nw - rusza sie horyzontalnie\nv - rusza sie vertyklanie\nr - rusza sie po planszy\nESC - wychodzi z programu";
    do{
        if(kbhit()){
            key=getch();
            if(key=='+'){
                pudelko++;
            }else if(key=='-'){
                pudelko--;
            }else if(key=='p'){
                pudelko.indexPrawo();
            }else if(key=='l'){
                pudelko.indexLewo();
            }else if(key=='h'){
                (CProstokat::horyzontalnie) ? (CProstokat::horyzontalnie=false) : (CProstokat::horyzontalnie=true);
            }
            else if(key=='r'){
                (CProstokat::normalnie) ? (CProstokat::normalnie=false) : (CProstokat::normalnie=true);
            }
            else if(key=='w'){
                (CProstokat::vertykalnie) ? (CProstokat::vertykalnie=false) : (CProstokat::vertykalnie=true);
            }
            else if(key=='k'){
                (CProstokat::kolorZmiana) ? (CProstokat::kolorZmiana=false) : (CProstokat::kolorZmiana=true);
            }

        }
        //pudelko.RuchProstokatow();
        pudelko.RuchProstokata();
        delay(20);
        cleardevice();
    }while(key!=27);
    closegraph();
}
