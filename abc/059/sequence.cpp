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
    vector<ll> a(N), sum(N);
    rep(i, 0, N) cin >> a[i];
    sum[0] = a[0];
    ll ans1 = 0;
    if(sum[0] <= 0) {
        ans1 += (1 + abs(sum[0]));
        sum[0] = 1;
    }
    rep(i, 1, N) {
        sum[i] = sum[i-1] + a[i];
        if(i%2 == 0) {
            if(sum[i] < 0) {
                ans1 += (1 + abs(sum[i]));
                sum[i] = 1;
            }
        } else {
            if(sum[i] > 0) {
                ans1 += (1 + sum[i]);
                sum[i] = -1;
            }
        }
    }

    sum[0] = a[0];
    ll ans2 = 0;
    if(sum[0] >= 0) {
        ans2 += (1 + sum[0]);
        sum[0] = -1;
    }
    rep(i, 1, N) {
        sum[i] = sum[i-1] + a[i];
        if(i%2 == 0) {
            if(sum[i] >= 0) {
                ans2 += (1 + sum[i]);
                sum[i] = -1;
            }
        } else {
            if(sum[i] <= 0) {
                ans2 += (1 + abs(sum[i]));
                sum[i] = 1;
            }
        }
    }
    
    cout << min(ans1, ans2) << endl;
}