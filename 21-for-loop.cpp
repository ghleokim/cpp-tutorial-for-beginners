// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=8958s

/*
    for loop
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

    // for loop
    for(int i=1; index>0; i++){
        cout << index << endl;
        index--;
    }

    return 0;
}