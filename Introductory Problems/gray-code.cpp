#include <iostream>
#include <string>
using namespace std;
string gray_code(string s, int curr, int n, int parity) {
    if(n == 1){
        return s + to_string(curr ^ parity);
    }
    if(curr >= n){
        s += to_string(1 ^ parity);
        return gray_code(s, curr - n, n/2, 1);
    } else {
        s += to_string(parity);
        return gray_code(s, curr, n/2, 0);
    }
}
int main() {
    int n;
    cin >> n;
    int largest = 1 << n;
    for(int i = 0; i < largest; i++){
        cout << gray_code("", i, largest/2, 0) << "\n";
    }
}
