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
    int N; cin >> N;
    vector<string> S(N);
    rep(i, 0, N) cin >> S[i];
    int cnt = 0;
    rep(i, 0, N) if(S[i] == "For") cnt++;
    if(cnt > N/2) cout << "Yes" << endl;
    else cout << "No" << endl;
}