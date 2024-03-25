#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<long long, long long> a;
    for(int i=0; i<n; i++) {
        long long tmp; cin >> tmp;
        a[tmp%200]++;
    }

    long long cnt = 0;
    for(auto i : a) cnt += (i.second)*(i.second-1)/2;
    cout << cnt << endl;
}