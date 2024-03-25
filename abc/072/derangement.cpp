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
    vector<int> p(N);
    rep(i, 0, N) cin >> p[i];
    int ans = 0;
    rep(i, 0, N-1) {
        if(p[i] == i+1) {
            swap(p[i], p[i+1]);
            ans++;
        }
    }
    if(p[N-1] == N) ans++;
    cout << ans << endl;
}