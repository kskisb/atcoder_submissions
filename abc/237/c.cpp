#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    string S; cin >> S;
    int firstA = -1, lastA = -1;
    int firstcnt = 0, lastcnt = 0;
    rep(i, 0, S.size()) {
        if(S[i] == 'a') firstA = i;
        else break;
    }
    if(firstA != -1) {
        firstcnt = firstA+1;
        S.erase(0, firstA+1);
    }

    rrep(i, 0, S.size()) {
        if(S[i] == 'a') lastA = i;
        else break;
    }
    if(lastA != -1) {
        lastcnt = S.size() - lastA;
        S.erase(lastA);
    }

    if(lastcnt >= firstcnt || S.size() == 0) {
        rep(i, 0, S.size()) {
            if(S[i] != S[S.size()-i-1]) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}