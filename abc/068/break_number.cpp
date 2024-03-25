#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int cnt = 0, ans;
    for(int i=1; i<=N; i++) {
        int tmp = i, cnt_tmp = 0;
        while(tmp%2 == 0) {
            tmp /= 2; cnt_tmp++;
        }
        if(cnt_tmp >= cnt) {
            cnt = cnt_tmp; ans = i;
        }
    }
    cout << ans << endl;
}