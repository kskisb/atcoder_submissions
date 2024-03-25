#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> S(N+1, 0);
    for(int i=0; i<N-1; i++) {
        int A; cin >> A;
        S[i+1] = S[i] + A;
    }

    vector<int> a(M);
    for(int i=0; i<M; i++) cin >> a[i];

    long long ans = 0;
    int now = 0;
    for(int i=0; i<M; i++) {
        ans += abs(S[a[i] + now] - S[now]);
        now += a[i];
        ans %= 100000;
    }
    cout << ans << endl;
}