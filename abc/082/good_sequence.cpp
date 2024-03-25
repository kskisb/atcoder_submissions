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
    map<int, int> a;
    for(int i=0; i<n; i++) {
        int num; cin >> num; a[num]++;
    }

    int min_cnt = 0;
    for(auto i : a) {
        if(i.first < i.second) min_cnt += i.second - i.first;
        else if(i.first > i.second) min_cnt += i.second;
    }
    cout << min_cnt << endl;
}