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
    int N, M; cin >> N >> M;
    vector<int> a(M), b(M);
    vector<bool> satisfied(M, false);
    rep(i, 0, M) cin >> a[i] >> b[i];
    int ans = 0;
    while(true) {
        int right = INT_MAX, left = 0;
        rep(i, 0, M) if(!satisfied[i]) right = min(right, b[i]);
        rep(i, 0, M) if(!satisfied[i] && a[i] < right) left = max(left, a[i]);
        rep(i, 0, M) if(a[i] <= left && right <= b[i]) satisfied[i] = true;
        ans++;
        int finish = 0;
        rep(i, 0, M) if(satisfied[i]) finish++;
        if(finish == M) break;
    }
    cout << ans << endl;
}