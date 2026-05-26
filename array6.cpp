// Search element in a 2D Matrix

#include<iostream>
using namespace std;

int main(){
    int row, col, num;
    bool found = false;

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

    cout << "Search a number: ";
    cin >> num;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] == num){
                found = true;
                break;
            }
        }

        if(found){
            break;
        }
    }

    if(found){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    return 0;
}