#ifndef CPILECZKA_H
#define CPILECZKA_H

class CPileczka
{
    public:
        int X,Y,R,kolor;
        CPileczka(int _X, int _Y, int _R, int _kolor);
        CPileczka();
        ~CPileczka();
        void Rysuj();
        void Ruch();
    static int LGx, LGy, PDx, PDy;
    private:
        int dX, dY;
        void Oblicz();
        void Kasuj();
};

#endif // CPILECZKA_H
