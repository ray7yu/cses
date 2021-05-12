#include <iostream>
using namespace std;

int main() {
    long num;
    cin >> num;
    cout << num;
    while(num != 1){
        if(num % 2 == 0) num = num >> 1;
        else num = num*3 + 1;
        cout << " " << num;
    }
    return 0;
}