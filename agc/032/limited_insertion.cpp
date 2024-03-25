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
    vector<int> b(N), ans;
    rep(i, 0, N) cin >> b[i];
    bool flag = true;
    while(flag) {
        flag = false;
        rrep(i, 0, b.size()) {
            if(b[i] == i+1) {
                ans.push_back(i+1);
                b.erase(cbegin(b) + i);
                flag = true;
                break;
            }
        }
    }
    if(ans.size() == N) rrep(i, 0, N) cout << ans[i] << endl;
    else cout << -1 << endl;
}