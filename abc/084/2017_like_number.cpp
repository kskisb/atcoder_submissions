#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

bool isprime(int n) {
    for(int i=2; i*i<=n; i++) {
        if(n%i == 0 || ((n+1)/2)%i == 0) return false;
    }
    return true;
}

int main() {
    int Q; cin >> Q;
    vector<int> p(500000, 0);
    for(int i=3; i<500000; i+=2) p[i] = p[i-2] + isprime(i);

    vector<int> ans;
    for(int q=0; q<Q; q++) {
        int l, r; cin >> l >> r;
        l = max(l-2, 1);
        ans.push_back(p[r]-p[l]);
    }
    for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}