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
    int N;
    cin >> N;
    vector<int> A(N);
    int negative = 0;
    ll abs_minA = 1000000001;
    for(int i=0; i<N; i++) {
        cin >> A[i];
        if(A[i] < 0) negative++;
        ll tmp = abs(A[i]);
        abs_minA = min(abs_minA, tmp);
    }

    ll ans = 0;
    for(int i=0; i<N; i++) ans += abs(A[i]);
    if(negative%2 == 0) cout << ans << endl;
    else cout << ans - 2*abs_minA << endl;
}