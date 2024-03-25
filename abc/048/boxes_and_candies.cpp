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
using ll = long long;

int main() {
    int N, x; cin >> N >> x;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a[i];
    ll ans = 0;
    for(int i=1; i<N; i++) {
        if(a[i-1] + a[i] > x) {
            int eat = a[i-1] + a[i] - x;
            ans += eat;
            if(a[i] >= eat) a[i] -= eat;
            else {
                eat -= a[i];
                a[i] = 0;
                a[i-1] -= eat;
            }
        }
    }
    cout << ans << endl;
}