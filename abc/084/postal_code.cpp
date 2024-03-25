#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    string S;
    cin >> A >> B;
    cin >> S;

    bool flag = true;
    for(int i=0; i<A+B; i++) {
        if(i == A && S[i] != '-') flag = false;
        if(i != A && S[i] == '-') flag = false;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}