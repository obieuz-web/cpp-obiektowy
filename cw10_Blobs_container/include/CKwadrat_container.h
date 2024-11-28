#ifndef CKWADRAT_CONTAINER_H
#define CKWADRAT_CONTAINER_H
#include <vector>
#include <memory>
#include "CKwadrat.h"

class CKwadrat_container
{
    public:
        CKwadrat_container();
        ~CKwadrat_container();

        CKwadrat_container& operator++(int);
        CKwadrat_container& operator--(int);

        void RuchKwadratow();
    private:
        std::vector<std::shared_ptr<CKwadrat>> kwadraty;
};

#endif // CKWADRAT_CONTAINER_H
