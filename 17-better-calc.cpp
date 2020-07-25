// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=6958s

/*
    better-calc : 계산기 만들기

    숫자 두개와 연산자 하나를 받아 결과를 반환하는 계산기를 만든다.
    조건문을 통해 잘못된 연산자가 들어온 경우를 걸러낸다.
    
*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    int result;

    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else {
        // no-ops
        cout << "Invalid Operator";
        return 1;
    }

    cout << result;

    return 0;
}