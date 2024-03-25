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
    ll K, A, B; cin >> K >> A >> B;

    ll ans = 1;
    if(A >= B || B-A <= 2) ans += K;
    else {
        for(int i=0; i<K; i++) {
            if(ans >= A && i <= K-2) {
                ans += (B - A);
                i++;
            } else {
                ans++;
            }
        }
    }
    cout << ans << endl;
}