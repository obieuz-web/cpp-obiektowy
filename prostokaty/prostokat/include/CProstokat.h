#ifndef CPROSTOKAT_H
#define CPROSTOKAT_H
struct TPunkt{
    int X;
    int Y;
};

class CProstokat
{
    public:
        CProstokat();
        ~CProstokat();

        void Obrot();
        void Rysuj();
        void Oblicz();

        void switchHorizontal(){this->horyzontalnie=!this->horyzontalnie;};
        void switchVertical(){this->vertykalnie=!this->vertykalnie;};
        void switchNormal(){this->normalnie=!this->normalnie;};
        void switchColor(){this->kolorZmiana=!this->kolorZmiana;};
    private:
        int X,Y;
        int kolor;
        double Angle,dAngle,przekatna;
        bool horyzontalnie,vertykalnie,normalnie,kolorZmiana,isActive;
        int dX,dY,dOdstepX,dOdstepY;
        int odstepX,odstepY,domyslnyOdstepX,domyslnyOdstepY;
        TPunkt pkty[4];

        void ObliczPunkty();
        void Ruch();
        void RuchHoryzontalny();
        void RuchVertykalny();
        void ObrocPunkty();
        void RysujPunkty();
        void Zmienkolor();
};

#endif // CPROSTOKAT_H
