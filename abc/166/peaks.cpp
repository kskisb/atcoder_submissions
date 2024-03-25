#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    vector<int> H(N), A(N), B(N);
    for(int i=0; i<N; i++) cin >> H[i];

    vector<bool> good_or_not(N, true);
    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b; a--; b--;
        if(H[a] <= H[b]) good_or_not[a] = false;
        if(H[b] <= H[a]) good_or_not[b] = false;
    }

    int cnt = 0;
    for(int i=0; i<N; i++) if(good_or_not[i]) cnt++;
    cout << cnt << endl;
}