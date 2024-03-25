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
    vector<int> d(n+1), v(101, 0);
    for(int i=1; i<n+1; i++) {
        cin >> d[i]; v[d[i]]++;
    }
    int max_mochi = 0;
    for(int i=1; i<101; i++) if(v[i] >= 1) max_mochi++;
    cout << max_mochi << endl;
}