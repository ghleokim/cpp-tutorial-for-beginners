// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=14044s
// extend functionality or functions of a class

// Chef : superclass
// ItalianChef: subclass

/*
    inheritance

    상속을 통해 기존 클래스가 가지고 있는 함수, 속성을 가져올 수 있으며,
    이를 오버라이딩해 다른 역할을 하는 함수도 생성 가능하다.
    
*/

#include <iostream>
using namespace std;

class Chef { 
    public:
        void makeChicken() {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad() {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish() {
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{
    public:
        // extension
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        // override할 수 있다.
        void makeSpecialDish() {
            cout << "The chef makes napolitana" << endl;
        }
};

int main() {
    
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef itChef;
    itChef.makeChicken();
    itChef.makePasta();
    itChef.makeSpecialDish();

    return 0;
}