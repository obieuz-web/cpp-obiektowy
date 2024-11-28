#include "../include/CBlobs_container.h"
#include <iostream>

CBlobs_container::CBlobs_container() {

}

CBlobs_container& CBlobs_container::operator++(int) {
    blobs.push_back(std::make_shared<CBlob>());
    return *this;
}

CBlobs_container& CBlobs_container::operator--(int) {
    if (!blobs.empty()) {
        blobs.erase(blobs.begin());
    } else {
        std::cout << "Wektor jest pusty.\n";
    }
    return *this;
}

void CBlobs_container::MoveBlobs() {
    for (size_t i = 0; i < blobs.size(); ++i) {
        blobs[i]->ExecuteMovements();
    }
}
