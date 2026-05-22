// Row or Column wise Sum of 2D Matrix 

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
   
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum += arr[i][j];
        }
        cout << "Sum of Row - " << i+1 << " : " << sum << endl;
    }

    for(int j=0; j<col; j++){
        int sum = 0;
        for(int i=0; i<row; i++){
            sum += arr[i][j];
        }
        cout << "Sum of Column - " << j+1 << " : " << sum << endl;
    }

    return 0;
}