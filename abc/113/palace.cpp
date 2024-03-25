#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, T, A;
    cin >> N >> T >> A;
    int h, ans;
    double ave_T, min_diff = 10000000.0;
    for(int i=0; i<N; i++) {
        cin >> h;
        ave_T = T - h*0.006;
        if(min_diff > abs(A - ave_T)) {
            ans = i;
            min_diff = abs(A - ave_T);
        }
    }
    cout << ans+1 << endl;
}