#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long x, y;
    cin >> n;
    vector<long long> results;
    for(int i = 0; i < n; i++){
        cin >> x;
        cin >> y;
        long long highest = max(x, y);
        long long result;
        //size is even
        if(highest % 2 == 0){
            if(x >= y){
                result = highest * highest - (y-1);
            } else{
                result = (highest-1) * (highest-1) + 1 + (x-1);
            }
        } else { //size is odd
            if(x >= y){
                result = (highest-1) * (highest-1) + 1 + (y-1);
            } else{
                result = highest * highest - (x-1);
            }
        }
        results.push_back(result);
    }
    for(unsigned int r = 0; r < results.size(); r++){
        cout << results[r] << endl;
    }
    return 0;
}