#include "graphics.h"
#include <iostream>
#include "include/CPileczka.h"
#include "include/CBlizniaki.h"
int main(){
    int n=50;
    initwindow(500,500);
    CPileczka pilka1(100,120,20,10);
    CPileczka pilka2(120,120,20,14);
    CBlizniaki blizniak(100,100,10,200,240,10);
    //CPileczka pilki[10];
    CPileczka::PDx = 500;
    CPileczka::PDy = 500;
    CBlizniaki::PDx = 500;
    CBlizniaki::PDy = 500;

    while(!kbhit()){
        blizniak.Ruch();
        pilka1.Ruch();
        pilka2.Ruch();
//        for(int i=0;i<n;i++){
//            pilki[i].Ruch();
//        }
        //sprawdz(pilka1.X+pilka1.R,pilka2.X+pilka2.R,pilka1.Y+pilka1.R,pilka2.Y+pilka2.R);
        delay(20);
        cleardevice();
    }
    closegraph();
return 0;
}
