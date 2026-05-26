// Sum of the Diagonals of 2D Matrix

#include<iostream>
using namespace std;

int main(){
    int row, col;

    cout << "Enter row number: ";
    cin >> row;

    cout << "Enter column number: ";
    cin >> col;

    int arr[100][100];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Element - (" << i+1 << "," << j+1 << ") : ";
            cin >> arr[i][j];
        }
    }

    int sum1 = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i == j){
                sum1 += arr[i][j];
            }
        }
    }

    cout << "Sum of Diagonal - 1 : " << sum1 << endl;

    int sum2 = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i + j == row - 1){
                sum2 += arr[i][j];
            }
        }
    }

    cout << "Sum of Diagonal - 2 : " << sum2 << endl;

    return 0;
}