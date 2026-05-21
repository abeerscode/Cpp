// Count digits

#include<iostream>
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
    cout << "Number of digit: " << count;

}