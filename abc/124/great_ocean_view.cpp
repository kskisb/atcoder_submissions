#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, h_max = 0, cnt = 0;
    cin >> N;
    vector<int> h(N);
    for(int i=0; i<N; i++) cin >> h[i];

    for(int i=0; i<N; i++) {
        if(h[i] >= h_max) {
            h_max = h[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}