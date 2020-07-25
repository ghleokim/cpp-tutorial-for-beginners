// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=7340s

/*
    switch statements : 여러 번의 비교 연산을 한 번에 정의해놓기

    아래 예시와 같이 0~6의 숫자를 요일로 변환하도록 하는 함수를 만든다.
    이 때 switch(arg) {case ...}를 사용하면 편하게 구현할 수 있다.
    
*/

#include <iostream>

using namespace std;

string getDayofWeek(int dayNum) {
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }

    return dayName;
}

int main() {

    cout << getDayofWeek(10);

    return 0;
}