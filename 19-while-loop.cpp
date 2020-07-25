// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=7847s

/*
    while loop

    두 가지 스타일이 있다.
    
    - while(조건){코드}
    - do {코드} while (조건)

    이 두 방식의 차이는 적어도 한 번 실행되느냐 여부에 있다.
    do ... while 의 경우 일단 한 번 실행하고 난 뒤 조건을 보기 때문에
    이러한 특수한 경우 do while이 유용할 수 있다.

*/

#include <iostream>

using namespace std;

int main() {
    int index = 1;

    // while loop
    while(index <= 5){
        cout << index << endl;
        index++;
    }

    // do-while loop
    do {
        cout << index << endl;
        index--;
    } while(index > 0);

    return 0;
}
