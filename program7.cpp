// Strong number
// 145 --> 1! + 4! + 5! = 145 --> Strong Number
// 123 --> 1! + 2! + 3! = 9 ----> Not Strong Number

#include<iostream>
using namespace std;

int main(){
    int num = 145;
    int temp = num;
    int sum = 0;
    int product = 1;
    while(num != 0){
        int digit = num % 10;
        for(int i=digit ; i>0 ; i--){
            product = product * i;
        }
        sum = sum + product;
        num = num / 10;
    }
    cout << sum;
    /*if(sum == temp){
        cout << temp << " is a Armstrong Number.";
    }
    else{
        cout << temp << " is not a Armstrong Number.";
    }*/
    
}