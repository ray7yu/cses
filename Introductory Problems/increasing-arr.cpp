#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long temp;
    vector<long> nums;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        nums.push_back(temp);
    }
    int index = 1;
    long turns = 0;
    while(index < nums.size()){
        if(nums[index] < nums[index-1]){
            long needed = nums[index-1] - nums[index];
            turns += needed;
            nums[index] = nums[index-1];
        }
        index++;
    }
    cout << turns;
    return 0;
}