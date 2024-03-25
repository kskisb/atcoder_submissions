#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <deque>
using namespace std;
using ll=long long;

int main() {
    int K;
    cin >> K;

    vector<ll> a(1000001);
    a[1] = 7%K;
    for(int i=2; i<=K; i++) a[i] = (a[i-1]*10 + 7)%K;
    for(int i=1; i<=K; i++) {
        if(a[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}