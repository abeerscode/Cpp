// Swap number without third variable

#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter number-1: ";
    cin >> num1;

    cout << "Enter number-2: ";
    cin >> num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "Swap Number - 1 : " << num1;
    cout << "\nSwap Number - 2 : " << num2;
}