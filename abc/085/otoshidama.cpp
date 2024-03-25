#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, y;
    cin >> n >> y;

    int i, j, k;
    bool flag = false;
    for(i=0; i<=n; i++) {
        for(j=0; j<=n; j++) {
            k = y - i*10000 - j*5000;
            if(k >= 0 && k%1000 == 0 && i + j + k/1000 == n) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }

    if(flag) cout << i << " " << j << " " << k/1000 << endl;
    else cout << -1 << " " << -1 << " " << -1 << endl;
}