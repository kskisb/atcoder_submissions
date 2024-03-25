#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    for(int i=0; i<N; i++) cin >> h[i];
    sort(h.begin(), h.end());
    
    int min_diff = 1000000009;
    for(int i=K-1; i<N; i++) {
        if(h[i] - h[i-K+1] < min_diff) min_diff = h[i] - h[i-K+1];
    }
    cout << min_diff << endl;
}