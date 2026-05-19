#include<iostream>
using namespace std;

int main(){
    int previous, current, range;

    cout << "Previous number: ";
    cin >> previous;

    cout << "Current number: ";
    cin >> current;

    cout << "Range of the series: ";
    cin >> range;

    if(range >= 1)
        cout << previous << " ";

    if(range >= 2)
        cout << current << " ";

    for(int i = 0; i < range - 2; i++){
        int next = previous + current;
        cout << next << " ";

        previous = current;
        current = next;
    }

    return 0;
}