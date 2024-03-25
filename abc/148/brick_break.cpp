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
    vector<int> a(N);
    rep(i, 0, N) cin >> a[i];
    int ans = 0, now = 1;
    bool flag = false;
    rep(i, 0, N) {
        if(a[i] == now) {
            now++;
            flag = true;
            continue;
        } else ans++;
    }
    if(flag) cout << ans << endl;
    else cout << -1 << endl;
}