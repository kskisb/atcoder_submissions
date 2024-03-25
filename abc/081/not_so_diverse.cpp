#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), v(n, 0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        v[a[i]-1]++;
    }
    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<n-k; i++) ans += v[i];
    cout << ans << endl;
}