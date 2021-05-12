#include <iostream>
#include <map>
#include <iterator> 
using namespace std;
void getPermutation(string &path, map<char, int> &letters, int len) {
    if(path.length() == len){
        cout << path << endl;
    }
    for(auto it = letters.begin(); it != letters.end(); it++){
        if(it->second > 0){
            path += it->first;
            it->second--;
            getPermutation(path, letters, len);
            it->second++;
            path = path.substr(0, path.length()-1);
        }
    }
}
int factorial(int num){
    int res = 1;
    for(int i = 2; i <= num; i++){
        res *= i;
    }
    return res;
}
int main() {
    string s;
    cin >> s;
    map<char, int> letters;

    //Initialize map
    for(char &c: s){
        auto itr = letters.find(c);
        if(itr != letters.end()){
            itr->second += 1;
        } else {
            letters[c] = 1;
        }
    }
    //Calculate number
    int amount = factorial(s.length());
    for(auto it = letters.begin(); it != letters.end(); it++){
        if(it->second > 1){
            amount /= factorial(it->second);
        }
    }
    cout << amount << endl;
    //Print unique permutations
    string path = "";
    getPermutation(path, letters, s.length());
    return 0;
}