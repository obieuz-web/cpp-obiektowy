#include <iostream>
#include <cstdlib>
using std::cout;
void tablice(int *tab){
    int tab1[10];
    for(int i=0;i<10;i++){
        tab1[i]=rand()%6;
        cout<<tab1[i]<<"\n";
    }
    tab=tab1;
    }

int main(void)
{
    int *tab2;
    tablice(tab2);
    cout<<"\n";
    for(int i=0;i<10;i++){
        cout<<tab2[i]<<"\n";
    }
}
