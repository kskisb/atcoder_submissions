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

int N;

ll string_to_ll(string S) {

    ll res = 0, n = S.size(), p_ten = pow(10, n-1);
    for(int i=0; i<n; i++) {
        ll d = S[i] - '0';
        cout << d << endl;
        res += d * p_ten;
        p_ten /= 10;
    }
    return res;
}

int main() {
    string S = "14567";
    cout << string_to_ll(S) << endl;
}