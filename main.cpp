#include <iostream>
#include "math.h"
using namespace std;

struct Punkt{
    double x, y;
}a,b,c;

class Trojkat{

    double ab{}, bc{}, ac{};
    double a1{},a2{},b1{},b2{},c1{},c2{};

public:
    void set_A(double a1, double a2){ a.x = a1; a.y = a2; }
    void set_B(double b1, double b2){ b.x = b1; b.y = b2; }
    void set_C(double c1, double c2){ c.x = c1; c.y = c2; }

    void get_A(){cout << "A: (" << a.x << ";" << a.y << ")"<< endl;}
    void get_B(){cout << "B: (" << b.x << ";" << b.y << ")"<< endl;}
    void get_C(){cout << "C: (" << c.x << ";" << c.y << ")"<< endl;}

    Trojkat(){};



    Trojkat(Punkt a, Punkt b, Punkt c){
        this->set_A(a.x,a.y);
        this->set_B(b.x,b.y);
        this->set_C(c.x,c.y);
    }

    Trojkat(double a1, double a2, double b1, double b2, double c1, double c2){
        a.x = a1; a.y = a2;
        b.x = b1; b.y = b2;
        c.x = c1; c.y = c2;
    }

    void isRownoboczny(){

    }

    void isRownoramienny(){
        if(isExist()){
            if((ab==bc) || (ab==ac) || (bc==ac)) {
                cout << "jest rownoramienny" << endl;
            }else cout << "Nie jest rownoramienny"<<endl;
        }else cout << "Nie można stworzyć trojkata" <<endl;

    }
    void isProstokatny(){
        if(isExist()){
            if ((ab*ab+bc*bc==ac*ac) || (ab*ab+ac*ac==bc*bc) || (ac*ac+bc*bc==ab*ab)){
                cout << "jest prostokatny"<<endl;
            }else cout << "Nie jest prostokatny"<<endl;
        }else cout << "Nie można stworzyć trojkata"<<endl;
    }

    double pole(){
        if(isExist()){
            double p = obwod()/2;
            return sqrt((p)*(p-ab)*(p-bc)*(p-ac));
        }
    }

    double obwod(){
        if(isExist()){
            return ab+bc+ac;
        }
    }

    bool isExist(){
        ab = sqrt(pow((b.x)-(a.x),2)+pow((b.y)-(a.y),2));
        bc = sqrt(pow((c.x)-(b.x),2)+pow((c.y)-(b.y),2));
        ac = sqrt(pow((c.x)-(a.x),2)+pow((c.y)-(a.y),2));
        if((ab+bc>ac) && (ab+ac>bc) && (bc+ac>ab)){
            return true;
        }
        return false;
    }
};

int main() {
    a.x = 3; a.y = 9;
    b.x = -4; b.y = 2;
    c.x = 3; c.y = -2;
    Trojkat gg(a,b,c);
    Trojkat drugi(2,4,3,9,1,2);
    cout << "Czy istnieje: " <<gg.isExist() <<endl;
    gg.isRownoramienny();
    gg.isRownoboczny();
    gg.isProstokatny();
    cout << "Obwód: "<< gg.obwod()<<endl;
    cout << "Pole: " << gg.pole();
    drugi.isRownoramienny();
    drugi.isRownoboczny();
    drugi.isProstokatny();
}