#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <time.h>
#include "include/CBlob.h"
#include "include/CBlobs_container.h"
#include "include/CKwadrat.h"
#include "include/CKwadrat_container.h"

int main() {
    srand (time(NULL));
    initwindow(800, 600);
    CBlobs_container BlobContainer;
    CKwadrat_container KwadratContainer;
    CBlob::SetRB_border(getmaxx(), getmaxy());

    char key;
    std::cout << "1 dodaje prostokat" << std::endl
              << "q odejmuje" << std::endl
              << "s splashowanie" << std::endl
              << "m ruch" << std::endl
              << "Esc - wyjscie z programu" << std::endl;
    BlobContainer++;
    KwadratContainer++;
    do {
        if (kbhit()) {
            key = getch();
            switch (key) {
            case '1': BlobContainer++;
                      break;
            case 'q': BlobContainer--;
                      break;
            case '2': KwadratContainer++;
                      break;
            case 'w': KwadratContainer--;
                      break;
            case 's': CBlob::Splashing=!CBlob::Splashing;
                      (CKwadrat::vertykalnie) ? (CKwadrat::vertykalnie=false) : (CKwadrat::vertykalnie=true);
                      (CKwadrat::horyzontalnie) ? (CKwadrat::horyzontalnie=false) : (CKwadrat::horyzontalnie=true);
                      break;
            case 'm': CBlob::Moving=!CBlob::Moving;
                      (CKwadrat::normalnie) ? (CKwadrat::normalnie=false) : (CKwadrat::normalnie=true);
                      break;

            }
        }

        BlobContainer.MoveBlobs();
        KwadratContainer.RuchKwadratow();
        delay(40);
        cleardevice();
    } while (key != 27);  // 27 to ASCII code dla klawisza Esc

    closegraph();
    return 0;
}
