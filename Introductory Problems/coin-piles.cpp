#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    long a, b;
    for(int i = 0; i < t; i++){
        cin >> a;
        cin >> b;
        if((a + b) % 3 != 0 || (a > b && a > 2*b) || (a < b && 2*a < b)){
            cout << "NO" << endl;
            continue;
        } 
        cout << "YES" << endl;
    }
    return 0;
}