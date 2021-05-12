#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n < 4){
        if(n == 1){
            cout << 1;
            return 0;
        }
        cout << "NO SOLUTION";
        return 0;
    }
    int mid = (int) (n / 2.0 + 0.5);
    int m = mid;
    while(m > 0 && n > mid){
        cout << m << " " << n;
        m--;
        n--;
        if(m != 0) cout << " ";
    }
    if(m > 0) cout << m;
    return 0;
}