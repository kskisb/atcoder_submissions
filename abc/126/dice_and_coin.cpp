#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    double ans = 0;
    for(int i=1; i<=N; i++) {
        double tmp = 1.0/N;
        int score = i;
        while(score < K) {
            score *= 2;
            tmp /= 2;
        }
        ans += tmp;
    }

    printf("%.12lf\n", ans);
}