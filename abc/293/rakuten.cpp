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
    int N;
    string S;
    cin >> N >> S;
    int sumofS = 0;
    rep(i, 0, N) {
        sumofS += S[i] - '0';
    }

    int cnt = 0;
    rep(i, 0, N) {
        sumofS -= (S[i] - '0');
        rep(j, 0, 10) {
            if((sumofS + j) % 3 == 0) cnt++;
        }
        sumofS += (S[i] - '0');
    }
    if(sumofS % 3 == 0) cout << cnt - N + 1 << endl;
    else cout << cnt << endl;
}