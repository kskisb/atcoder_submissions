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
    map<string, int> s;
    for(int i=0; i<n; i++) {
        string str; cin >> str;
        s[str]++;
    }

    int s_max = 0;
    for(auto v : s) s_max = max(s_max, v.second);
    for(auto v : s) if(s_max == v.second) cout << v.first << endl;
}