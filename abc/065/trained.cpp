#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a[i];

    bool flag = false;
    int tmp = 0, cnt = 0;
    for(int i=0; i<N; i++) {
        tmp = a[tmp] - 1;
        cnt++;
        if(tmp == 1) {
            flag = true;
            break;
        }
    }
    if(flag) cout << cnt << endl;
    else cout << -1 << endl;
}