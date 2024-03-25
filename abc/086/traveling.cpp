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
    int N;
    cin >> N;
    vector<int> t(N), x(N), y(N);
    for(int i=0; i<N; i++) cin >> t[i] >> x[i] >> y[i];

    bool flag = true;
    int x_now = 0, y_now = 0, t_now = 0;
    for(int i=0; i<N; i++) {
        x_now = x[i] - x_now;
        y_now = y[i] - y_now;
        t_now = t[i] - t_now;
        if(abs(x_now) + abs(y_now) > t_now || (abs(x_now) + abs(y_now))%2 != t_now%2) flag = false;
        if(!flag) break;
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}