#ifndef CSTAR_H
#define CSTAR_H
struct TPoint{
    int x;
    int y;
};

class CStar
{
    public:
        CStar(int _X, int _Y, int _Rd, int _Rm, double _Angle );

        void Rysuj();
        void Obrot();
        ~CStar();
    private:
        TPoint pkty[12];
        int X,Y;
        int dX,dY,dD;
        int Rd,Rm;
        double Angle;
        double dAngle;
        TPoint LG,PD;
        void Oblicz();
};

#endif // CSTAR_H
