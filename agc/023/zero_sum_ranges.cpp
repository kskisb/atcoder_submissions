#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N), sum(N+1, 0);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) sum[i+1] = sum[i] + A[i];

    map<long long, long long> num;
    for(int i=0; i<N+1; i++) num[sum[i]]++;

    unsigned long long ans = 0;
    for(auto n : num) ans += n.second*(n.second - 1)/2;
    cout << ans << endl;
}