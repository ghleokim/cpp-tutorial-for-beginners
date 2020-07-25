// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=11606s

/*
    class, objects 

    클래스가 붕어빵 틀이라면 오브젝트는 붕어빵.

    클래스는 단지 명세만 적어놓는 것이다.
    
    오브젝트는 이를 바탕으로 해서 실제 데이터가 존재하는 것

*/

#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main() {

    string name = "Mike";
    double pi = 3.14;
    char favoriteLetter = 'G';

    // 객체지향에서 가장 중요한 요소 중 하나인 클래스와 오브젝트
    // class : blueprint. new type of data

    Book myBook;

    myBook.title = "This is JS";
    myBook.author = "someone";
    myBook.pages = 1234;

    cout << &myBook << " "<< &myBook.title << " " << &myBook.author << endl;
    cout << myBook.title.length() << endl;

    // for(int i=0; i<3; i++) {
    //     string *addr = &myBook.title;
    //     cout << sizeof(addr);
    //     cout << addr[i] << endl;
    // }

    return 0;
}