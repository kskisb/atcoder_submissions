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
    vector<int> num(3);
    for(int i=0; i<3; i++) cin >> num[i];
    sort(num.begin(), num.end());

    int ans = 0;
    if(num[0]%2 == num[1]%2) ans += (num[1]-num[0])/2;
    else {
        num[1]++; num[2]++; ans += 1;
        ans += (num[1]-num[0])/2;
    }
    ans += (num[2]-num[1]);

    cout << ans << endl;
}