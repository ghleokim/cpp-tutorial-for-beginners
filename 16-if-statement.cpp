// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=5722s

/*
    if statement : 조건문 연습

    기본적으로 if(조건){코드} else if(조건){코드} ... else {코드}
    의 구조를 가지고 있다. 
    조건에는 여러 가지 조건을 AND, OR로 합칠 수 있으며, 각각 &&와 ||로 나타낸다.
    
*/


#include <iostream>

using namespace std;

int getMax(int num1, int num2) {
    int result;
    
    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }

    return result;
}

int getMaxoutofThree(int num1, int num2, int num3) {
    int result;
    
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main() {
    cout << getMax(2,5) << endl;
    cout << getMaxoutofThree(10, 10, 3) << endl;
    return 0;
}