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

ll patty(int N, ll X, const vector<ll> &L, const vector<ll> &S) {
    if(N == 0) return 1;
    if(X == 1) return 0;
    else if(X <= L[N-1] + 1) return patty(N-1, X-1, L, S);
    else if(X == L[N-1] + 2) return S[N-1] + 1;
    else if(X <= 2*L[N-1] + 2) return patty(N-1, X-L[N-1]-2, L, S) + S[N-1] + 1;
    else return 2*S[N-1] + 1;
}

int main() {
    int N;
    ll X;
    cin >> N >> X;

    vector<ll> L(N+1, 1), S(N+1, 1);
    for(int i=1; i<=N; i++) {
        L[i] = 2*L[i-1] + 3;
        S[i] = 2*S[i-1] + 1;
    }

    cout << patty(N, X, L, S) << endl;
}