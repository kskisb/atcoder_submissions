#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    bool flag = false;
    string S_tmp = S;
    if(S_tmp == T) flag = true;
    else {
        for(int i=0; i<S.size()-1; i++) {
            S_tmp = S;
            S_tmp[i] = S[i+1];
            S_tmp[i+1] = S[i];
            if(S_tmp == T) flag = true;
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}