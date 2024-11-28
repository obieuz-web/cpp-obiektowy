#ifndef CBLIZNIAKI_H
#define CBLIZNIAKI_H


class CBlizniaki
{
    public:
        int X1,Y1,R1,X2,Y2,R2;
        CBlizniaki(int X1, int Y1, int R1,int X2, int Y2, int R2);
        ~CBlizniaki();
        void Rysuj();
        void Ruch();
    static int LGx, LGy, PDx, PDy;
    private:
        int X,Y,R,kolor;
        int dX1, dY1, dX2, dY2;
        void Oblicz();
        void Kasuj();
};

#endif // CBLIZNIAKI_H
