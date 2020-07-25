// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=12340s

// constructor is a special function that is called
// when we create object of a class

/*
    constructor 생성자

    생성자는 클래스의 객체를 새로 생성할 때 호출되는 특수한 함수이다.
    클래스명과 동일한 함수를 정의하면 그 것이 바로 생성자.

    생성자는 인자를 받아 객체를 초기화하는데 사용할 수 있다.
*/

#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
        // Book() {
        //     cout << "Creating Object" << endl;
        // }

        //constructor는 하나가 아닐 수도 있다.
        Book() {
            title = "noname";
            author = "undefined";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {

    // 아래와 같이 선언시에 인자를 전달할 수 있다.
    // Book myBook("JS");
    
    Book myBook("This is JS", "someone", 1234);

    // myBook.title = "This is JS";
    // myBook.author = "someone";
    // myBook.pages = 1234;

    Book myBook2("This is JS", "two", 700);

    // myBook.title = "This is JS";
    // myBook.author = "two";
    // myBook.pages = 700;

    cout << myBook.title << endl;;

    Book myBook3;

    cout << myBook3.title;

    return 0;
}