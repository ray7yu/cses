#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long apple;
    long sum = 0; 
    cin >> n;
    vector<long> weights;
    long a, b;
    for(int i = 0; i < n; i++){
        cin >> apple;
        sum += apple;
        weights.push_back(apple);
    }
    long diff = sum;
    for(int b = 1; b < (1<<n) - 1; b++){
        long temp = sum;
        for(int i = 0; (1 << i) < (1<<n); i++){
            if(b & (1 << i)){
                temp -= weights[i];
            }
        }
        diff = min(diff, abs(2 * temp - sum));
    }
    cout << diff << endl;
    return 0;
}