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
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    int now = 0, ans = 0;
    for(int i=1; i<N+1; i++) {
        now += (K-1);
        if(now >= N-1) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}