#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int ans = 0;
    for(int i=0; i<n;) {
        int j = i;
        while(j < n && a[i] == a[j]) j++;
        ans += (j-i)/2;
        i = j;
    }
    cout << ans << endl;
}