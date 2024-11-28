#ifndef CBLOB_H
#define CBLOB_H

struct TPoint {
    int x;
    int y;
};

class CBlob
{
    public:
        CBlob();
        void ExecuteMovements();
        void Draw();
        static TPoint LT_border, RB_border;
        static bool Splashing, Moving;
        static void SetRB_border(int x, int y);
        static void SetLT_border(int x, int y);
    private:
        int X,Y;
        int Height, Width;
        int Size, minSize, maxSize;
        int dX, dY;
        int dS;
        int color;
        bool SizeDirection;
        void DoSplashing();
        void Move();

};

#endif // CBLOB_H
