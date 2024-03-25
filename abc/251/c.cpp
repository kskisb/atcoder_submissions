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
#define rep(i, l, r) for(ll i=l; i<r; i++)
#define rrep(i, l, r) for(ll i=r-1; i>=l; i--)

int main() {
    int N; cin >> N;
    vector<pair<int, int>> Tnum;
    map<string, int> m;
    rep(i, 0, N) {
        string s; int t; cin >> s >> t;
        if(m[s] == 1) continue;
        Tnum.push_back(make_pair(t, -i-1));
        m[s]++;
    }

    sort(Tnum.begin(), Tnum.end(), greater<pair<int, int>>());
    cout << -Tnum[0].second << endl;
}