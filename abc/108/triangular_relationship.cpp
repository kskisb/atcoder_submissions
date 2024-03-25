#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    long long n, K;
    cin >> n >> K;
    if(K%2 != 0) {
        long long ans = n/K;
        cout << ans*ans*ans << endl;
    } else {
        long long ans1 = n/K;
        long long ans2 = (n+K/2)/K;
        cout << ans1*ans1*ans1 + ans2*ans2*ans2 << endl;
    }
}