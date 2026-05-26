// Max / Min element of a matrix

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

    int max = arr[0][0];
    int min = arr[0][0];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }

    cout << "Max element : " << max << endl;
    cout << "Min element : " << min;

    return 0;
}