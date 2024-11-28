#include "../include/CProstokatPudelko.h"
#include <iostream>
CProstokatPudelko::CProstokatPudelko()
{
    curIndex=0;
}

CProstokatPudelko& CProstokatPudelko::operator++(int){

    prostokaty.push_back(std::make_shared<CProstokat>());

    return *this;
}

CProstokatPudelko& CProstokatPudelko::operator--(int){

    if(!prostokaty.empty()){
        prostokaty.erase(prostokaty.begin()+curIndex);
        if(curIndex!=0){
            curIndex-=1;
        }
    }else{
        std::cout<<"Nie ma prostokatow :("<<std::endl;
    }

    return *this;
}

void CProstokatPudelko::RuchProstokatow(){

    for(int i=0;i<prostokaty.size();++i){
        prostokaty[i]->Oblicz();
    }
}

void CProstokatPudelko::RuchProstokata(){
    if(!prostokaty.empty()){
        prostokaty[curIndex]->Oblicz();
        for(int i=0;i<prostokaty.size();i++){
            if(i!=curIndex){
                prostokaty[i]->Rysuj();
            }
        }
    }
}

void CProstokatPudelko::UstawAktywne()
{
    prostokaty[curIndex]
}

void CProstokatPudelko::indexPrawo(){
    if(curIndex==prostokaty.size()-1){
        curIndex=0;
    }
    else{
    curIndex+=1;
    }
}

void CProstokatPudelko::indexLewo(){
    curIndex-=1;
    if(curIndex<0){
        curIndex=prostokaty.size()-1;
    }
}

CProstokatPudelko::~CProstokatPudelko()
{
    std::cout<<"Zamknito okno";
}
