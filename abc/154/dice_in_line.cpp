#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> sum(1001, 0);
    for(int i=1; i<=1000; i++) sum[i] = sum[i-1] + i;
    
    vector<double> E(N+1);
    for(int i=1; i<=N; i++) {
        int p; cin >> p;
        E[i] = 1.0*sum[p]/p;
    }
    
    double tmp = 0;
    for(int i=1; i<=K; i++) tmp += E[i];
    double ans = tmp;

    for(int i=K+1; i<=N; i++) {
        tmp = tmp - E[i-K] + E[i];
        ans = max(ans, tmp);
    }

    printf("%.12lf\n", ans);
}