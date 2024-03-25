#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    long long D;
    cin >> N >> D;
    vector<long long> x(N), y(N);
    for(int i=0; i<N; i++) cin >> x[i] >> y[i];

    int cnt = 0;
    for(int i=0; i<N; i++) {
        long long dist = x[i]*x[i] + y[i]*y[i];
        if(dist <= D*D) cnt++;
    }
    cout << cnt << endl;
}