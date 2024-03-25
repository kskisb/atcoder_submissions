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
    int N, M; cin >> N >> M;
    unordered_map<string, bool> stop;
    rep(i, 0, N) {
        string s; cin >> s;
        stop[s] = false;
    }
    rep(i, 0, M) {
        string t; cin >> t;
        stop[t] = true;
    }

    for(auto i : stop) {
        if(i.second) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}