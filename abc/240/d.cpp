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
    int N; cin >> N;
    stack<pair<int, int>> cylinder;

    int cnt = 0;
    veci ans(N);
    rep(i, 0, N) {
        int a; cin >> a;

        if(cylinder.empty()) {
            cylinder.push(make_pair(a, 1));
            cnt++;
        } else {
            if(a == cylinder.top().first) {
                cylinder.top().second++;
                cnt++;
                if(a == cylinder.top().second) {
                    cnt -= cylinder.top().second;
                    cylinder.pop();
                }
            } else {
                cylinder.push(make_pair(a, 1));
                cnt++;
            }
        }
        ans[i] = cnt;
    }

    for(auto i : ans) cout << i << endl;
}