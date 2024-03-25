#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int gcd(int m, int n) {
    if(m%n == 0) return n;
    return gcd(n, m%n);
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    vector<int> left(N+1, 0), right(N+1, 0);
    for(int i=0; i<N; i++) left[i+1] = gcd(left[i], A[i]);
    for(int i=N-1; i>=0; i--) right[i] = gcd(right[i+1], A[i]);
    
    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, gcd(left[i], right[i+1]));
    cout << ans << endl;
}