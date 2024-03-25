#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    vector<double> x(n), y(n);
    int id[n];
    for(int i=0; i<n; i++) cin >> x[i] >> y[i];
    for(int i=0; i<n; i++) id[i] = i;

    double ans = 0;
    do {
        double tmp = 0;
        for(int i=0; i<n-1; i++) tmp += sqrt((x[id[i+1]]-x[id[i]])*(x[id[i+1]]-x[id[i]]) + (y[id[i+1]]-y[id[i]])*(y[id[i+1]]-y[id[i]]));
        ans += tmp;
    } while(next_permutation(id, id+n));

    double fact_n = 1;
    for(int i=2; i<=n; i++) fact_n *= i;
    printf("%.10lf", ans/fact_n);
}