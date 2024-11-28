#include "../include/CKwadrat_container.h"
#include <iostream>
CKwadrat_container::CKwadrat_container()
{
    //ctor
}

CKwadrat_container& CKwadrat_container::operator++(int){

    kwadraty.push_back(std::make_shared<CKwadrat>());

    return *this;
}

CKwadrat_container& CKwadrat_container::operator--(int){

    if(!kwadraty.empty()){
        kwadraty.erase(kwadraty.begin());
    }else{
        std::cout<<"Nie ma prostokatow :("<<std::endl;
    }

    return *this;
}

void CKwadrat_container::RuchKwadratow(){

    for(int i=0;i<kwadraty.size();++i){
        kwadraty[i]->Oblicz();
    }
}

CKwadrat_container::~CKwadrat_container()
{
    std::cout<<"Zamknij to okno";
}
