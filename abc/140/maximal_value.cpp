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

int main() {
    int N; cin >> N;
    vector<int> B(N-1); for(int i=0; i<N-1; i++) cin >> B[i];
    
    ll ans = B[0] + B[N-2];
    for(int i=N-2; i>=1; i--) ans += min(B[i], B[i-1]);
    cout << ans << endl;
}