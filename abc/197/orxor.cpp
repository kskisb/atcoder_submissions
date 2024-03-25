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
    int N; cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    if(N == 1) {
        cout << A[0] << endl;
        return 0;
    }

    ll xor_min = LLONG_MAX;
    for(int bit = 0; bit<(1<<N-1); bit++) {
        if(bit == 0) continue;

        int start = 0;
        vector<ll> tmp;
        for(int i=0; i<N; i++) {
            if(bit & (1<<i)) {
                ll or_tmp = 0;
                for(int j=start; j<i+1; j++) or_tmp |= A[j];
                tmp.push_back(or_tmp);
                start = i+1;
            }
            if(i == N-1) {
                ll or_tmp = 0;
                for(int j=start; j<i+1; j++) or_tmp |= A[j];
                tmp.push_back(or_tmp);
            }
        }

        ll xor_tmp = 0;
        for(int i=0; i<tmp.size(); i++) xor_tmp ^= tmp[i];
        xor_min = min(xor_min, xor_tmp);
    }
    cout << xor_min << endl;
}