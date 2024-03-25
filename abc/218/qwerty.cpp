#include <iostream>
#include <string>
using namespace std;

int main() {
    int P[30];
    for(int i=0; i<26; i++) cin >> P[i];

    for(int i=0; i<26; i++) {
        cout << char('a' + P[i] -1);
    }
    cout << endl;
}