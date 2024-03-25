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
    vector<int> A(N+1), B(N);
    rep(i, 0, N+1) cin >> A[i];
    rep(i, 0, N) cin >> B[i];
    ll ans = 0;
    rrep(i, 0, N) {
        if(B[i] < A[i+1]) {
            ans += B[i];
        } else {
            B[i] -= A[i+1];
            ans += A[i+1] + min(A[i], B[i]);
            A[i] = max(0, A[i]-B[i]);
        }
    }
    cout << ans << endl;
}