#ifndef CPROSTOKATPUDELKO_H
#define CPROSTOKATPUDELKO_H
#include <vector>
#include <memory>
#include "CProstokat.h">
class CProstokatPudelko
{
    public:
        CProstokatPudelko();
        ~CProstokatPudelko();

        CProstokatPudelko& operator++(int);
        CProstokatPudelko& operator--(int);

        void RuchProstokatow();
        void RuchProstokata();
        void indexPrawo();
        void indexLewo();
    private:
        int curIndex;
        std::vector<std::shared_ptr<CProstokat>> prostokaty;
};

#endif // CPROSTOKATPUDELKO_H
