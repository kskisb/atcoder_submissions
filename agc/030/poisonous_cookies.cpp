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
    ll A, B, C;
    cin >> A >> B >> C;

    if(A+B >= C) cout << B + C << endl;
    else cout << A + B*2 + 1 << endl;
}