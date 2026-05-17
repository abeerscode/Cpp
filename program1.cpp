//Reverse a number

#include<iostream>
using namespace std;

int main(){
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    int reverseNum = 0;

    while(num != 0){
        digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num = num/10;
    }
    cout << temp << " reverse number is " << reverseNum;

    return 0;
}