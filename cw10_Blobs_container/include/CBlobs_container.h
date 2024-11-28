#include <vector>
#include <memory>
#include "../include/CBlob.h"
class CBlobs_container {
public:
    CBlobs_container();
    CBlobs_container& operator++(int);
    CBlobs_container& operator--(int);
    void MoveBlobs();

private:
    std::vector<std::shared_ptr<CBlob>> blobs;
};


