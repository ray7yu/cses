#include <iostream>
#include <math.h> 
using namespace std;
int main() {
    int n;
    cin >> n;
    int overflow = 1000000007;
    unsigned long long res = 1;
    for(int i = 0; i < n; ++i){
        res = (res << 1) % overflow;
    }
    cout << res << endl;
    return 0;
} 