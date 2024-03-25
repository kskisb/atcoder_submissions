#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvecll = vector<vecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    string S, T; cin >> S >> T;
    int Ssize = S.size(), Tsize = T.size();
    vector<bool> Sfront(Tsize+1, false), Sback(Tsize+1, false);
    Sfront[0] = true;
    rep(i, 1, Tsize+1) {
        if(Sfront[i-1] && (S[i-1] == T[i-1] || S[i-1] == '?' || T[i-1] == '?')) Sfront[i] = true;
        else Sfront[i] = false;
    }

    reverse(S.begin(), S.end());
    reverse(T.begin(), T.end());

    Sback[0] = true;
    rep(i, 1, Tsize+1) {
        if(Sback[i-1] && (S[i-1] == T[i-1] || S[i-1] == '?' || T[i-1] == '?')) Sback[i] = true;
        else Sback[i] = false;
    }

    rep(i, 0, Tsize+1) {
        if(Sfront[i] && Sback[Tsize-i]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}