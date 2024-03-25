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
    vector<pair<int, int>> ab(N), cd(N);
    rep(i, 0, N) cin >> ab[i].first >> ab[i].second;
    rep(i, 0, N) cin >> cd[i].first >> cd[i].second;
    sort(ab.begin(), ab.end());
    sort(cd.begin(), cd.end());

    int ans = 0;
    vector<bool> ab_paired(N, false);
    rep(i, 0, N) {
        int chosen_ab = -1, max_ab_y = -1;
        int cd_x = cd[i].first, cd_y = cd[i].second;
        rep(j, 0, N) {
            if(ab_paired[j]) continue;
            int ab_x = ab[j].first, ab_y = ab[j].second;
            if(ab_x < cd_x && ab_y < cd_y) {
                if(max_ab_y < ab_y) {
                    max_ab_y = ab_y;
                    chosen_ab = j;
                }
            }
        }
        if(chosen_ab != -1) {
            ab_paired[chosen_ab] = true;
            ans++; 
        }
    }
    cout << ans << endl;
}