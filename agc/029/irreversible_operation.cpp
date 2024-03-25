#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    ll ans = 0;
    int white_cnt = 0;
    for(int i=N-1; i>=0; i--) {
        if(S[i] == 'W') white_cnt++;
        else ans += white_cnt;
    }
    cout << ans << endl;
}