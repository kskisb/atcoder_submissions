#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> f(n+1);
    f[0] = 1;
    f[1] = 1;
    for(int i=2; i<=n; i++) {
        f[i] = f[i-2] + f[i-1];
    }

    cout << f[n] << endl;
}