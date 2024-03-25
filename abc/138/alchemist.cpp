#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
using ll = long long;

int main() {
    int N; cin >> N;
    vector<double> v(N);
    for(int i=0; i<N; i++) cin >> v[i];
    sort(v.begin(), v.end());
    double ans = v[0];
    for(int i=1; i<N; i++) ans = (ans + v[i])/2;
    cout << ans << endl;
}