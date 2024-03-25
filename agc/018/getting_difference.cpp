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

int gcd(int m, int n) {
    if(m%n == 0) return n;
    else return gcd(n, m%n);
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    
    int maxA = 0, g = A[0];
    for(int i=0; i<N; i++) maxA = max(maxA, A[i]);
    for(int i=1; i<N; i++) g = gcd(g, A[i]);
    
    if(K%g == 0 && K <= maxA) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}