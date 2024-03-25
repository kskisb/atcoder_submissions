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
    vector<ll> A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];
    ll ans = 0;
    rrep(i, 0, N) {
        A[i] += ans;
        if(B[i] == 1 || A[i]%B[i] == 0) continue;
        ans += B[i] - A[i]%B[i];
    }
    cout << ans << endl;
}