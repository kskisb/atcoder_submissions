#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <climits>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
using ll = long long;
ll INF = 1LL << 60;
ll mod = 1000000007;

int main() {
    double a, b, x; cin >> a >> b >> x;
    double ans;
    if(2*x < a*a*b) {
        double tmp = a*b*b/(2.0*x);
        ans = atan(tmp)*180/M_PI;
    } else {
        double tmp = (2.0*a*a*b-2.0*x)/a/a/a;
        ans = atan(tmp)*180/M_PI;
    }
    printf("%.10lf", ans);
    cout << endl;
}