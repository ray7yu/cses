#include <iostream>
using namespace std;

int main() {
    int curr;
    long n;
    long sum = 0;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> curr;
        sum += curr;
    }
    cout << (n * (n+1)) / 2 - sum;
    return 0;
}