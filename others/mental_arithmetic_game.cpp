#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    string S; cin >> S;
    int ans = 0;
    for(int i=1; i<=S.size(); i++) {
        if(i%2 == 1) ans += S[i-1] - '0';
        else ans -= S[i-1] - '0';
    }
    cout << ans << endl;
}