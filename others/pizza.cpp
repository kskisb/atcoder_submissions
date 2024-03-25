#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, n, m; cin >> d >> n >> m;
    vector<int> stores(n), k(m);
    stores[0] = 0;
    for(int i=1; i<n; i++) cin >> stores[i];
    for(int i=0; i<m; i++) cin >> k[i];

    sort(stores.begin(), stores.end());
    int sum = 0;
    for(int i=0; i<m; i++) {
        auto iter_lower = lower_bound(stores.begin(), stores.end(), k[i]);
        auto iter_upper = upper_bound(stores.begin(), stores.end(), k[i]);

        long idx_lower = distance(stores.begin(), iter_lower);
        long idx_upper = distance(stores.begin(), iter_upper);

        int a = idx_upper;
        if(a == 0) a = stores.size()-1;
        else a--;
        int b = stores.size() - idx_lower;
        if(b != 0) b = idx_lower;
        sum += min({abs(k[i]-stores[a]), abs(k[i]-stores[b]), (d-abs(k[i]-stores[a])), (d-abs(k[i]-stores[b]))});
    }
    cout << sum << endl;
}