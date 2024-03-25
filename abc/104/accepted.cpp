#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;

    // 条件1
    if(S[0] == 'A') count++;

    // 条件2
    int count_C = 0;
    for(int i=2; i<S.size() - 1; i++) {
        if(S[i] == 'C') count_C++;
    }
    if(count_C == 1) count++;

    // 条件3
    int count_small = 0;
    for(int i=1; i<S.size(); i++) {
        if(S[i] >= 'a' && S[i] <= 'z') count_small++;
    }
    if(count_small == S.size() - 2) count++;

    if(count == 3) cout << "AC" << endl;
    else cout << "WA" << endl;
}