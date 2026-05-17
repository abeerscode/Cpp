// Palindrome number
// 121 reverse is 121, Palindrome.
// 231 reverse is 132, not Palindrome

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
    
    if(temp == reverseNum){
        cout << temp << " is Palindrome Number";
    }
    else{
        cout << temp << " is not Palindrome Number";
    }

    return 0;
}