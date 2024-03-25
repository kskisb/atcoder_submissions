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
    ll X, K, D;
    cin >> X >> K >> D;
    X = abs(X);

    ll move = X/D;
    if(move >= K) cout << X - D*K << endl;
    else {
        X -= move*D;
        K -= move;
        if(K % 2 == 0) cout << X << endl;
        else cout << abs(X-D) << endl;
    }
}