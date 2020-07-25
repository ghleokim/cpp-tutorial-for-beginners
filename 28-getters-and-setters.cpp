// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=13303s
// getters , setters는 클래스에서 사용하는 함수 개념.
// public으로 지정된 내용은 외부에서 접근 가능.

/*
    getters, setters

    객체 변수를 public으로 설정하면 프로그램에서 객체에 접근하여 그 값을 직접 수정할 수 있다.
    이를 외부에서 접근 불가능한 private 변수로 설정한다면, 외부에서 접근 및 수정을 하지 못하도록 할 수 있을 것이다.
    대신 private 변수는 클래스 내부에서 접근 가능하기 때문에,
    이 값을 설정하고 수정하는 getter, setter 메소드를 정의해주어야 한다.

*/

#include <iostream>

using namespace std; 

class Movie {
    private:
        string rating; // 이렇게 하면 이 클래스 내부에서만 접근가능
    public:
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        string getRating() {
            return rating;
        }

        void setRating(string aRating) {
            // setup rules for rating value.
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }
    
};

int main()
{
    Movie avengers("The Agvengers", "Joss Wheden", "PG-13");

    cout << avengers.getRating() << endl;

    // rating이 결국 string값이기 때문에 잘못된 값이 들어갈 가능성이 있다.
    // 따라서 이를 private 변수로 설정할 수 있는데,
    // 유효성 검사와 변수 접근 측면에서 setter는 필요하다.
    //
    // avengers.rating = "Dog"; //=> wrong
    
    avengers.setRating("Dog");

    cout << avengers.getRating();

    return 0;
}