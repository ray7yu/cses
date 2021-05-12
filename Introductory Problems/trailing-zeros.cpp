#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 5; i <= n; i += 5){
        int temp = i;
        while(temp % 5 == 0){
            count++;
            temp /= 5;
        }
    }
    cout << count << endl;
    return 0;
}