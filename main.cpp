#include <iostream>
#include "Gemi.h"
#include "HizliGemi.h"
#include "GucluGemi.h"
#include "NormalGemi.h"

int main() {
    srand(time(nullptr));
    HizliGemi gemi_H;
    GucluGemi gemi_G;
    NormalGemi gemi_N;
    gemi_H.Eventler();
    gemi_G.Eventler();
    gemi_N.Eventler();

    std::cout<<"\n"<<"Hizli Gemi puani"<<gemi_H.Puanhesapla();
    std::cout<<"\n"<<"Guclu Gemi puani"<<gemi_G.Puanhesapla();
    std::cout<<"\n"<<"Normal Gemi puani"<<gemi_N.Puanhesapla();
    return 0;
}
