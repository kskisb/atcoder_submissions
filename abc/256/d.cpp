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
    vector<pair<int, int>> lr(N);
    rep(i, 0, N) cin >> lr[i].first >> lr[i].second;
    sort(lr.begin(), lr.end());

    vector<pair<int, int>> ans;
    int left = lr[0].first, right = lr[0].second;
    rep(i, 1, N) {
        if(right >= lr[i].first && right < lr[i].second) right = lr[i].second;
        else if(right >= lr[i].first && right >= lr[i].second) {
            continue;
        } else {
            ans.push_back(make_pair(left, right));
            left = lr[i].first; right = lr[i].second;
        }
    }

    ans.push_back(make_pair(left, right));
    for(auto i : ans) cout << i.first << " " << i.second << endl;
}