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
    vector<ll> a(3*N);
    for(int i=0; i<3*N; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0;
    for(int i=N; i<3*N-1; i+=2) ans += a[i];
    cout << ans << endl;
}