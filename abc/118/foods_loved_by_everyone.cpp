#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> k(n), v(m, 0);
    vector<vector<int>> a(n, vector<int>(m));

    for(int i=0; i<n; i++) {
        cin >> k[i];
        for(int j=0; j<k[i]; j++) cin >> a[i][j];
    }

    for(int i=0; i<n; i++) for(int j=0; j<k[i]; j++) v[a[i][j]-1]++;

    int cnt = 0;
    for(int i=0; i<m; i++) if(v[i]==n) cnt++;
    cout << cnt << endl;
}