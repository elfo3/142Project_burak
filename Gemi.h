//
// Created by 90546 on 18.03.2024.
//

#ifndef INC_142_GEMI_H
#define INC_142_GEMI_H

class Gemi{
public:
    Gemi()=default;
    int random;
    virtual void Astroid() = 0; // Pure virtual function
    virtual void Terkedilmis() = 0; // Pure virtual function
    virtual void UzayKorsanlari() = 0; // Pure virtual function
    virtual double Puanhesapla()=0;// Pure virtual function
    virtual double Kontrol()=0;// Pure virtual function
    void Eventler(){
        for(int k=0;k<5;k++){
            random=rand()%3;
            if(random==0){
                Astroid();
            }else if(random==1){
                Terkedilmis();
            }else{
                UzayKorsanlari();
            }
            if(Kontrol()==0){
                break;
            }
        }
    }

protected:
    int para=0;
    int yakit=100;
    int saglik=100;
    double KOlasilik=1;//kacma olasiliği
    double HOlasilik=1;//hasar olasiliği
};


#endif //INC_142_GEMI_H
