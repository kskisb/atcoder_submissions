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
    ll A, B, K;
    cin >> A >> B >> K;

    if(A >= K) A -= K;
    else {
        K -= A;
        A = 0;
        B -= K;
        if(B < 0) B = 0;
    }

    cout << A << " " << B << endl;
}