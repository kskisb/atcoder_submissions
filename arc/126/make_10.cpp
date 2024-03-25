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
    int T; cin >> T;

    vector<ll> ans;
    for(int i=0; i<T; i++) {
        // n1 : 1, n2 : 3, n3 : 2
        ll n1, n2, n3; cin >> n1 >> n2 >> n3;
        n2 /= 2;
        ll ans_tmp = 0;

        ll tmp = -1;
        if(n2 >= 1 && n3 >= 1) {
            tmp = min(n2, n3);
            ans_tmp += tmp;
            n2 -= tmp;
            n3 -= tmp;
        }

        if(n1 >= 2 && n2 >= 1) {
            tmp = min(n1/2, n2);
            ans_tmp += tmp;
            n1 -= 2*tmp;
            n2 -= tmp;
        }

        if(n1 >= 1 && n3 >= 2) {
            tmp = min(n1, n3/2);
            ans_tmp += tmp;
            n1 -= tmp;
            n3 -= 2*tmp;
        }

        if(n1 >= 3 && n3 >= 1) {
            tmp = min(n1/3, n3);
            ans_tmp += tmp;
            n1 -= 3*tmp;
            n3 -= tmp;
        }

        if(n1 >= 5) ans_tmp += n1/5;

        ans.push_back(ans_tmp);
    }
    for(int i=0; i<T; i++) cout << ans[i] << endl;
}