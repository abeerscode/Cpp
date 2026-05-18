// Armstrong number
// 153 ---> has 3 digit. Power = 3. 
// 1^3 + 5^3 + 3^3 = 153 Armstrong number.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    int count = 0;

    while(num != 0){
        count++;
        num /= 10;
    }

    num = temp;
    int sum = 1;

    while(num != 0){
        int digit = num % 10;
        int power = 1;

        for(int i=0; i<count; i++){
            power *= digit;
        }
        sum += power;
        num /= 10;
    }

    if(sum == temp){
        cout << temp << " is a Armstrong Number";
    }
    else{
        cout << temp << " is not a Armstrong Number";
    }
}