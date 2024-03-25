#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = INT_MAX;
    for(int i=0; i<=2*max(x, y); i=i+2) {
        int xnum = i/2, ynum = i/2;
        int a_num = max(0, x - xnum), b_num = max(0, y - ynum);
        ans = min(ans, i*c + a_num*a + b_num*b);
    }
    cout << ans << endl;
}