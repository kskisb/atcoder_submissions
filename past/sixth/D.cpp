#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, K; cin >> N >> K;
    vector<long long> S(N+1, 0);
    for(int i=0; i<N; i++) {
        int A; cin >> A;
        S[i+1] = S[i] + A;
    }
    for(int i=1; i<=N-K+1; i++) cout << S[i+K-1] - S[i-1] << endl;
}