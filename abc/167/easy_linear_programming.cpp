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
    ll A, B, C, K;
    cin >> A >> B >> C >> K;

    ll ans = 0;
    if(A >= K) ans = K;
    else {
        ans += A;
        K -= A;
        if(B < K) {
            K -= B;
            ans -= K;
        }
    }
    cout << ans << endl;
}