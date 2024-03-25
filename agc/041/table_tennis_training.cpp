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
    ll N, A, B;
    cin >> N >> A >> B;

    if((B - A - 1)%2 != 0) cout << (B-A)/2 << endl;
    else {
        ll ans1 = min(B-1, N-A);
        ll ans2 = N - B + 1;
        ll tmpA = A + N - B + 1, tmpB = N;
        ans2 += (tmpB-tmpA)/2;
        ll ans3 = A;
        tmpA = 1; tmpB = B - A;
        ans3 += (tmpB-tmpA)/2;
        cout << min({ans1, ans2, ans3}) << endl;
    }
}