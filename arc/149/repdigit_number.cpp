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
    int N, M;
    cin >> N >> M;
    int ans = 0, ans_limit = pow(10, N);

    for(int i=1; i<=ans_limit; i++) {
        if(i % M != 0) continue;
        int tmp = i%10, tmp_i = i;
        while(true) {
            if(tmp == tmp_i%10) tmp_i /= 10;
            else break;

            if(tmp_i == 0) {
                ans = max(ans, i);
                break;
            }
        }
    }
    if(ans) cout << ans << endl;
    else cout << -1 << endl;
}