#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
#include <queue>
using namespace std;
using ll = long long;

int main() {
    set<int> S;
    for(int i=0; i<3; i++) {
        int s; cin >> s;
        S.insert(s);
    }
    cout << S.size() << endl;
}