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
    int N, K; cin >> N >> K;
    veci a(N);
    rep(i, 0, N) cin >> a[i];

    vveci nums(K, veci());
    rep(i, 0, N) nums[i%K].push_back(a[i]);
    rep(i, 0, K) sort(nums[i].begin(), nums[i].end());

    veci ans;
    rep(i, 0, N) {
        ans.push_back(nums[i%K].front());
        nums[i%K].erase(nums[i%K].begin());
    }

    rep(i, 1, N) {
        if(ans[i] < ans[i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}