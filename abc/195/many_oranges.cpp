#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    int w;
    cin >> a >> b >> w;

    int min_cnt = 10000000, max_cnt = -1;
    for(int i=1000*w/a; i>=1; i--) {
        if(1000*w/i >= a) min_cnt = min(min_cnt, i);
    }
    for(int i=1; i<=(1000*w + b - 1)/b; i++) {
        if(1000*w/i <= b) max_cnt = max(max_cnt, i);
    }
    if(min_cnt != 10000000 && max_cnt != -1) cout << min_cnt << " " << max_cnt << endl;
    else cout << "UNSATISFIABLE" << endl;
}