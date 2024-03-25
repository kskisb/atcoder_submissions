#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<long long> h(n), s(n);
    for(int i=0; i<n; i++) cin >> h[i] >> s[i];

    long long l = 0, r = LLONG_MAX;
    while(r - l > 1) {
        long long mid = (l + r)/2;

        bool flag = true;
        vector<long long> t(n, 0);
        for(int i=0; i<n; i++) {
            if(mid < h[i]) flag = false;
            else t[i] = (mid - h[i])/s[i];
        }
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++) if(t[i] < i) flag = false;

        if(flag) r = mid;
        else l = mid;
    }

    cout << r << endl;
}