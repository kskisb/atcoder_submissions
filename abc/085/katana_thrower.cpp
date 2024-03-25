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
    int N, H; cin >> N >> H;
    vector<pair<int, int>> katana(N+1);
    katana[0].first = 0; katana[0].second = 0;
    rep(i, 1, N+1) cin >> katana[i].second >> katana[i].first;
    sort(katana.rbegin(), katana.rend());
    int max_i = 0;
    rep(i, 0, N+1) if(katana[i].second > katana[max_i].second) max_i = i;
    int ans = 0;
    rep(i, 0, N+1) {
        if(katana[i].first < katana[max_i].second) break;
        H -= max(katana[i].first, katana[max_i].second); ans++;
        if(H <= 0) break;
    }
    if(H > 0) ans += (H + katana[max_i].second - 1) / katana[max_i].second;
    
    cout << ans << endl;
}