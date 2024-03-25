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
    vector<long long> x(N);
    for(int i=0; i<N; i++) {
        long long tmp; cin >> tmp; x[i] = abs(tmp);
    }

    long long m_dist = 0, e_dist = 0, c_dist = -1;
    for(int i=0; i<N; i++) {
        m_dist += x[i];
        e_dist += x[i]*x[i];
        c_dist = max(c_dist, x[i]);
    }
    double e_dist_ans = sqrt(e_dist);

    cout << m_dist << endl;
    printf("%.15lf\n", e_dist_ans);
    cout << c_dist << endl;
}