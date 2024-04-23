#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;
ll mod = 1000000007;

int main() {
    ll a, b, k; cin >> a >> b >> k;
    if(a >= k) {
        cout << a-k << " " << b << endl;
    } else if(a+b >= k) {
        cout << 0 << " " << a+b-k << endl;
    } else {
        cout << 0 << " " << 0 << endl;
    }
}