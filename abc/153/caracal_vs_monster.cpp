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

map<ll, ll> ans;

ll rec(ll H) {
    if(ans[H]) return ans[H];

    if(H == 1) {
        ans[H] = 1;
        return 1;
    } else {
        ans[H] += (2 * rec(H/2) + 1);
    }

    return ans[H];
}

int main() {
    ll H; cin >> H;

    cout << rec(H) << endl;
}