#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N; cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(), A.end());

    long long ans = 1, pow10 = pow(10, 18);
    bool flag = false;
    if(A[0] == 0) {
        ans = 0;
    } else {
        for(int i=0; i<N; i++) {
            if(pow10 / ans < A[i]) {
                flag = true; break;
            }
            ans *= A[i];
        }
    }
    if(flag) cout << -1 << endl;
    else cout << ans << endl;
}