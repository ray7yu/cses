#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> results;
    
    results.push_back(0);
    results.push_back(6);
    results.push_back(28);
    long ways = 28;
    for(int i = 4; i <= n; i++){
        long temp = ways;
        //One knight on last row or col
        temp += 3*(i*i - 3) + 4*(i*i-4);
        for(int mid = 2; mid < i-2; mid++){
            temp += 2*(i*i-5);
        }
        //Two knight on last row or col
        temp -= (2*i - 1)*(2*i-2)/2;
        temp += 2;
        results.push_back(temp);
        ways = temp;
    }
    for(unsigned int r = 0; r < n; r++){
        cout << results[r] << endl;
    }
    return 0;
}