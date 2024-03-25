#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int main() {
    double Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    vector<pair<double, double>> p_a(4);
    p_a[0].first = Q*8; p_a[0].second = 0.25;
    p_a[1].first = H*4; p_a[1].second = 0.5;
    p_a[2].first = S*2; p_a[2].second = 1.0;
    p_a[3].first = D; p_a[3].second = 2.0;
    sort(p_a.begin(), p_a.end());

    ll ans = 0;
    for(int i=0; i<4; i++) {
        ans += (ll)(p_a[i].first / 2.0 * p_a[i].second) * (ll)(N/p_a[i].second);
        N = fmod(N, p_a[i].second);
    }
    cout << ans << endl;
}