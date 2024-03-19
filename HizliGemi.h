//
// Created by 90546 on 18.03.2024.
//

#ifndef INC_142_HIZLIGEMI_H
#define INC_142_HIZLIGEMI_H
#include "Gemi.h"

class HizliGemi: public Gemi {
public:
    int a,b;
    HizliGemi()=default;
    void Astroid(){
        for(int i=0;i<3;i++){
            a=rand()%2;

            if (a == 0) {
                saglik = saglik - (10 * Holasilik);
            }
            if(saglik<0){
                saglik=0;
                break;
            }
        }
    }
    void Terkedilmis(){
        a=rand()%2;
        if (a == 0 )
            UzayKorsanlari();
        else
            para=para+10;
    }
    void UzayKorsanlari(){
        std::cout<<"Kac icin 1, Savas icin 2, Pazarlik icin 3'u tuslamalisiniz";
        std::cin>>a;
        if(a==1){
            if(yakit>=33) {
                yakit = yakit - 33;
                b = rand() % 4;
                if (b < (2 * Kolasilik)) {
                    return;
                }else {
                    UzayKorsanlari();
                }
            }else{
                std::cout<<"yetersiz yakit";
                return;

            }
        }
        else if(a==3){
            b=1+rand()%3;
            para=para-(b*10);
            if(para<0){
                para=para+(b*10);
                a=2;
            }
        }
        else if(a==2){//bu sırada yaptım çünkü eğer parası yetmezse savaşmaya gitsin diye
            b=rand()%2;
            if(b==0){
                saglik=saglik-(30*Holasilik);
            }
            if(saglik<=0){
                saglik=0;
                return;
            }
        }
    }
    double Puanhesapla(){
        return (yakit*5)+(saglik*10)+(para*10);
    }
    double Kontrol(){
        if(para<0||saglik<0||yakit<0){
            return 1;
        }
        return 0;
    }

private:
protected:
    double Kolasilik=1.5;
    double Holasilik=1.5;


};

#endif //INC_142_HIZLIGEMI_H
