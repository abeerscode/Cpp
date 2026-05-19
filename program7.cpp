// Strong number
// 145 --> 1! + 4! + 5! = 145 --> Strong Number
// 123 --> 1! + 2! + 3! = 9 ----> Not Strong Number

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    int sum = 0;
    
    while(num != 0){
        int digit = num % 10;
        int factorial = 1;
        for(int i=digit ; i>0 ; i--){
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    if(sum == temp){
        cout << temp << " is a Strong Number.";
    }
    else{
        cout << temp << " is not a Strong Number.";
    }   
}