#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    long long cnt = 0;
    sort(a.begin(), a.end());
    while(a.size() >= 2) {
        int tmp_max = a[a.size()-1], tmp_min = a[0];
        tmp_max %= tmp_min;
        if(tmp_max == 0) a.pop_back();
        else {
            for(int i=0; i<a.size(); i++) {
                if(tmp_max <= a[i]) {
                    a.insert(a.begin() + i, tmp_max);
                    a.pop_back();
                    break;
                }
            }
        }
        cnt++;
    }
    cout << cnt << endl;
}