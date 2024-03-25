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
        res += d * p_ten;
        p_ten /= 10;
    }
    return res;
}

int main() {
    string S; cin >> S;
    int N = S.size();
    ll ans = 0;

    for(int bit=0; bit<(1 << N-1); bit++) {
        int start = 0;
        for(int i=0; i<N; i++) {
            if(bit & (1<<i)) {
                ans += string_to_ll(S.substr(start, i-start+1));
                start = i+1;
            }
            if(i == N-1) {
                ans += string_to_ll(S.substr(start, i-start+1));
            }
        }
    }

    cout << ans << endl;
}