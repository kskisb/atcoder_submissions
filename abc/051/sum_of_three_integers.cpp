#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int ans = 0;
    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {
            int z = s - x - y;
            if(z >= 0 && z <= k) ans++;
        }
    }
    cout << ans << endl;
}