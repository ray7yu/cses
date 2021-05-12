#include <iostream>
#include <vector>
using namespace std;

int main() {
    long n;
    int count = 0;
    cin >> n;
    vector<bool> elems(n+1, false);
    long sum = n * (n+1) / 2;
    if(sum % 2 != 0){
        cout << "NO";
    } else {
        cout << "YES" << endl;
        sum /= 2;
        long temp = n;
        while(sum != 0){
            temp = min(sum, temp);
            sum -= temp;
            elems[temp] = true;
            count++;
            temp -= 1;
        }
        cout << count << endl;
        for(unsigned int i = 1; i < elems.size(); i++){
            if(elems[i]){
                cout << i << " ";
            }
        }
        cout << endl;
        cout << n - count << endl;
        for(unsigned int i = 1; i < elems.size(); i++){
            if(!elems[i]){
                cout << i << " ";
            }
        }
    }
    return 0;
}