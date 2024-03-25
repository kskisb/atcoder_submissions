#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, K; cin >> N;
    vector<long long> S(N+1, 0);
    for(int i=0; i<N; i++) {
        int A; cin >> A;
        S[i+1] = S[i] + A;
    }
    vector<long long> ans(N+1, 0);
    for(int i=1; i<N+1; i++) {
        for(int j=0; j<=N-i; j++) {
            ans[i] = max(ans[i], S[j+i]-S[j]);
        }
    }

    for(int i=1; i<N+1; i++) cout << ans[i] << endl;
}