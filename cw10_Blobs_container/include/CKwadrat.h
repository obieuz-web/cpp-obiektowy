#ifndef CKWADRAT_H
#define CKWADRAT_H


class CKwadrat
{
    public:
        CKwadrat();
        ~CKwadrat();

        void Obrot();
        void Rysuj();
        void Oblicz();
    static bool horyzontalnie,vertykalnie,normalnie,kolorZmiana;
    private:
        int X,Y;
        int kolor;
        int dX,dY,dOdstepX,dOdstepY;
        int odstepX,odstepY,domyslnyOdstepX,domyslnyOdstepY;


        void Ruch();
        void RuchHoryzontalny();
        void RuchVertykalny();
        void Zmienkolor();
};

#endif // CKWADRAT_H
