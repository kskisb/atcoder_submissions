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
    map<string, int> num;

    for(int i=0; i<n; i++) {
        string s; cin >> s; num[s] = 1;
    }

    int ans = 0;
    for(auto v : num) ans += v.second;
    cout << ans << endl;
}