#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    if(x == 1) {
        cout << x << endl;
        return 0;
    }
    long long ans = -1;
    for(int i=1; i<=x; i++) {
        for(int j=2; j<=x; j++) {
            long long tmp = pow(i,j);
            if(tmp <= x) ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
}