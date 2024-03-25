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
    vector<string> S(3), T(3);
    rep(i, 0, 3) cin >> S[i];
    rep(i, 0, 3) cin >> T[i];
    int cnt = 0;
    rep(i, 0, 3) if(S[i] == T[i]) cnt++;

    if(cnt == 1) cout << "No" << endl;
    else cout << "Yes" << endl;
}