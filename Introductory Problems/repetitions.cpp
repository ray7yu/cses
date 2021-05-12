#include <iostream>
using namespace std;

int main() {
    string dna;
    int highest = 1, rep = 1;
    cin >> dna;
    for(int i = 1; i < dna.length(); i++){
        if(dna[i] == dna[i-1]){
            rep += 1;
            highest = max(highest, rep);
        } else {
            rep = 1;
        }
    }
    cout << highest;
    return 0;
}