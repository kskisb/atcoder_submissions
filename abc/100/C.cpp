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

int multiple_of_2(ll n) {
    int cnt = 0;
    while(n%2 == 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

int main() {
    int N;
    cin >> N;
    vector<ll> a(N);
    for(int i=0; i<N; i++) cin >> a[i];

    ll cnt = 0;
    for(int i=0; i<N; i++) cnt += multiple_of_2(a[i]);
    cout << cnt << endl;
}