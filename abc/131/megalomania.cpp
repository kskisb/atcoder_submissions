#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
#define rep(i, l, r) for(int i=l; i<r; i++)
#define rrep(i, l, r) for(int i=r-1; i>=l; i--)
using ll = long long;

int main() {
    int N; cin >> N;
    vector<pair<int, int>> BA(N);
    rep(i, 0, N) cin >> BA[i].second >> BA[i].first;
    sort(BA.begin(), BA.end());
    bool flag = true;
    ll now = 0;
    rep(i, 0, N) {
        now += BA[i].second;
        if(now > BA[i].first) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}