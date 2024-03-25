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
    map<string, long long> num;
    long long ans = 0;
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        sort(s.begin(), s.end());
        num[s]++;
    }

    for(auto v : num) ans += v.second*(v.second-1)/2;
    cout << ans << endl;
}