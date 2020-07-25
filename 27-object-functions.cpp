// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=12881s
// instance function or object functions
// 객체가 가지고 있는 함수

/*
    object functions

    객체 함수(객체 메소드)는 객체가 실행할 수 있는 함수.
    이 함수는 객체가 생성될 때 연결된 채로 생성된다.
    
*/

#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }
        
        bool hasHonors() {
            if(gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main(){
    Student s1("Jim", "Business", 2.4);
    Student s2("Pam", "Art", 3.6);

    cout << s1.hasHonors() << endl;
    cout << s2.hasHonors() << endl;

    return 0;
}