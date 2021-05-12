#include <iostream>
#include <vector>
#include <set>
using namespace std;
int checkQueen(vector<set<int>> &reserved, set<int> &col, set<int> &upper_diag, set<int> &lower_diag, int i){
    if(i == 8) return 1;
    int sum = 0;
    for(int j = 0; j < 8; j++){
        if(reserved[i].find(j) == reserved[i].end() && col.find(j) == col.end() 
        && upper_diag.find(i+j) == upper_diag.end() && lower_diag.find(i-j) == lower_diag.end()){
            col.insert(j);
            upper_diag.insert(i+j);
            lower_diag.insert(i-j);
            sum += checkQueen(reserved, col, upper_diag, lower_diag, i+1);
            col.erase(j);
            upper_diag.erase(i+j);
            lower_diag.erase(i-j);
        }
    }
    return sum;
}
int main() {
    char point;
    //Find reserved locations
    vector<set<int>> reserved(8);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> point;
            if(point == '*') reserved[i].insert(j);
        }
    }
    set<int> col, upper_diag, lower_diag;
    cout << checkQueen(reserved, col, upper_diag, lower_diag, 0) << endl;
    return 0;
}