#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    for(int i=0; i<S.size(); i++) {
        int x = S[i]-'A';
        x = (x+N)%26;
        cout << char('A' + x);
    }
    cout << endl;
}