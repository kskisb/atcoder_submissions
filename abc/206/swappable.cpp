#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<long long, long long> a;
    for(int i=0; i<n; i++) {
        long long tmp; cin >> tmp;
        a[tmp]++;
    }

    long long ans = 0, cnt = n;
    for(auto i : a) {
        ans += i.second * (cnt - i.second);
        cnt -= i.second;
    }
    cout << ans << endl;
}