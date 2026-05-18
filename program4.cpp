// Swap number with third variable

#include<iostream>
using namespace std;

int main(){
    int num1, num2, temp;

    cout << "Enter number-1: ";
    cin >> num1;

    cout << "Enter number-2: ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Number - 1 : " << num1;
    cout << "\nNumber - 2 : " << num2;
}