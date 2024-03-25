#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n), h(n);
    for(int i=0; i<n; i++) cin >> x[i] >> y[i] >> h[i];

    int cx, cy, h_tmp, h_ans;
    for(int i=0; i<=100; i++) {
        for(int j=0; j<=100; j++) {
            for(int k=0; k<n; k++) {
                if(h[k] != 0) {
                    h_tmp = h[k] + abs(x[k]-i) + abs(y[k]-j); break;
                }
            }
            bool flag = true;
            for(int k=1; k<n; k++) {
                if(h[k] != max(h_tmp - abs(x[k]-i) - abs(y[k]-j), 0)) flag = false;
            }
            if(flag) {
                cx = i; cy = j; h_ans = h_tmp;
            }
        }
    }
    cout << cx << " " << cy << " " << h_ans << endl;
}