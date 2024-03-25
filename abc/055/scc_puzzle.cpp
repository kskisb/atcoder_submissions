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
    ll N, M;
    cin >> N >> M;

    ll ans = 0;
    if(2*N <= M) {
        ans += N;
        M -= 2*N;
        ans += M/4;
    } else ans += M/2;
    cout << ans << endl;
}