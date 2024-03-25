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

ll gcd(int m, int n) {
    if(m%n == 0) return n;
    else return gcd(n, m%n);
}

int main() {
    int N;
    cin >> N;

    ll sum = 0;
    for(int i=0; i<N; i++) {
        ll a;
        cin >> a;
        sum += a;
    }

    cout << sum - N << endl;
}