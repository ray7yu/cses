#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    string s;
    vector<int> letters(26, 0);
    cin >> s;

    for(char &c: s){
        letters[c-'A'] += 1;
    }
    bool odd = false;
    char oddLetter;
    string res = "";
    for(unsigned int i = 0; i < letters.size(); i++){
        if(letters[i] % 2 == 1){
            if(odd){
                cout << "NO SOLUTION";
                return 0;
            }
            odd = true;
            oddLetter = i + 'A';
        } 
        for(int times = 0; times < letters[i]/2; times++){
            res += i + 'A';
        }
    }
    string backward = res;
    reverse(backward.begin(), backward.end());
    if(odd){
        res += oddLetter;
    }
    res += backward;
    cout << res;
    return 0;
}