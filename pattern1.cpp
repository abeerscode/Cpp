// Pattern 3x3

#include<iostream>
using namespace std;

int main(){
    int row = 3;
    int col = 3;

    int value = 0;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            value++;
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}