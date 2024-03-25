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
    int N;
    cin >> N;
    map<ll, ll> A;
    for(int i=0; i<N; i++) {
        ll a;
        cin >> a;
        A[a]++;
    }

    ll side1 = 0, side2 = 0;
    for(auto a : A) {
        if(a.second == 1) continue;
        side1 = max(side1, a.first);
        if(side1 > side2) {
            swap(side1, side2);
            if(a.second > 3) side1 = side2;
        }
    }

    ll ans = side1 * side2;
    cout << ans << endl;
}