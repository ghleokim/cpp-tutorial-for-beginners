// https://www.youtube.com/watch?v=vLnPwxZdW4Y&t=9921s

/*
    2d array, nested loops
    
    2차원 배열, for문 안의 for문
    
*/

#include <iostream>

using namespace std;

int main() {

    int numberGrid[3][2] = {
        {1, 2},
        {4, 5},
        {7, 8}
    };

    // cout << numberGrid[0][1];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j ++){
            cout << numberGrid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}