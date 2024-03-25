#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> h(n); for(int i=0; i<n; i++) cin >> h[i];

    int cnt_max = 0, cnt_tmp = 0;
    for(int i=0; i<n-1; i++) {
        if(h[i] >= h[i+1]) cnt_tmp++;
        else cnt_tmp = 0;
        cnt_max = max(cnt_max, cnt_tmp);
    }
    cout << cnt_max << endl;
}