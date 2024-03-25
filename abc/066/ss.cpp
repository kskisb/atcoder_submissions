#include <iostream>
#include <string>
using namespace std;

bool check(string S) {
    string S1 = S.substr(0, S.size()/2), S2 = S.substr(S.size()/2);
    if(S1 == S2) return true;
    return false;
}

int main() {
    string S;
    cin >> S;

    int ans;
    for(int i=1; i<S.size(); i++) {
        string S_tmp = S.substr(0, S.size()-i);
        if(S_tmp.size() % 2 != 0) continue;
        if(check(S_tmp)) {
            ans = S_tmp.size();
            break;
        }
    }

    cout << ans << endl;
}