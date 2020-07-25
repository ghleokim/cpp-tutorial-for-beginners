// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=10751s

/*
    포인터

    int age = 19;
    int *pAge = &age;

    => [가리키는 위치의 데이터 자료형] *[포인터 변수] = &[가리키는 변수]

    &[변수]  : dereferencing
    *[포인터] : referencing

*/

#include <iostream>

using namespace std;

int main() {

    int age = 19;
    int *pAge = &age;

    double gpa = 2.7;
    double *pGpa = &gpa;

    string name = "Mike";
    string *pName = &name;
 
    cout << "age  : " << age << "   " << &age << endl;
    cout << "gpa  : " << gpa << "  " << &gpa << endl;
    cout << "name : " << name << " "  << &name << endl;

    // &[variable] => pointer : referencing the mem address
    // *[pointer] => variable : referencing the value which pointer is pointing at

    return 0;
}