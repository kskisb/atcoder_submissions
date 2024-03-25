#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using veci = vector<int>;
using vecll = vector<ll>;
using vecd = vector<double>;
using vveci = vector<veci>;
using vvveci = vector<vveci>;
using vvecll = vector<vecll>;
using vvvecll = vector<vvecll>;
using vvecd = vector<vecd>;
using Graph = vector<vector<int>>;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)

int main() {
    ll N;
    string S;
    cin >> N >> S;
    set<ll> s;
    ll x = N, y = N;
    s.insert(N*x+y);
    rep(i, 0, N) {
        if(S[i] == 'R') x++;
        else if(S[i] == 'L') x--;
        else if(S[i] == 'U') y++;
        else y--;
        if(s.find(N*x+y) != s.end()) {
            cout << "Yes" << endl;
            return 0;
        } else s.insert(N*x+y);
    }
    cout << "No" << endl;
}