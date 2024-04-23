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

struct Circle {
    double x;
    double y;
    double r;
};

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main() {
    int N, M; cin >> N >> M;
    vector<Circle> circles(N);
    vector<double> c_x(M);
    vector<double> c_y(M);
    for(int i=0; i<N; i++) {
        double x, y, r; cin >> x >> y >> r;
        circles[i].x = x;
        circles[i].y = y;
        circles[i].r = r;
    }

    for(int i=0; i<M; i++) {
        double x, y; cin >> x >> y;
        c_x[i] = x;
        c_y[i] = y;
    }

    double ans = 100000000;
    if(N != 0 && M != 0) {
        for(int i=0; i<M; i++) {
            double tmp = 100000000;
            for(int j=0; j<N; j++) {
                double dist = distance(circles[j].x, circles[j].y, c_x[i], c_y[i]);
                tmp = min(tmp, abs(dist-circles[j].r));
            }
            ans = min(ans, tmp);
        }
    } else if(N != 0) {
        for(int i=0; i<N; i++) ans = min(ans, circles[i].r);
    } else {
        for(int i=0; i<M; i++) {
            for(int j=i+1; j<M; j++) {
                ans = min(ans, distance(c_x[i], c_y[i], c_x[j], c_y[j]));
            }
        }
        ans /= 2;
    }

    printf("%.15lf", ans);
    cout << endl;
}