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
    int N, C, K; cin >> N >> C >> K;
    vector<int> T(N);
    rep(i, 0, N) cin >> T[i];
    
    int bus = 0;
    sort(T.begin(), T.end());
    rep(i, 0, N) {
        int j = i, s = T[j], tmp = 0;
        while(tmp < C && T[j] <= s + K && j < N) {
            tmp++; j++;
        }
        bus++; i = j-1;
    }

    cout << bus << endl;
}