// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=9512s

/*
    exponent function : for loop 활용하기
*/

#include <iostream>

using namespace std;

int power(int baseNum, int powNum){
    int result = 1;
    
    for(int i=0; i<powNum; i++){
        result *= baseNum;
    }

    return result;
}

int main() {

    cout << power(2,4);

    return 0;
}