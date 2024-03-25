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
    map<int, int> a;

    for(int i=0; i<n; i++) {
        int d; cin >> d; a[d]++;
    }

    bool flag = true;
    for(auto v : a) {
        if(v.second == 1) continue;
        else flag = false;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}