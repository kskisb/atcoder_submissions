#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> C(M);
    vector<vector<int> > A(M);
    vector<string> R(M);

    for (int i = 0; i < M; ++i) {
        cin >> C[i];
        A[i].resize(C[i]);
        for (int j = 0; j < C[i]; ++j) {
            cin >> A[i][j];
        }
        cin >> R[i];
    }

    int ans = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        bool flag = true;
        for (int i = 0; i < M; ++i) {
            int count = 0;
            for (int j = 0; j < C[i]; ++j) {
                if (bit & (1 << (A[i][j] - 1))) {
                    count += 1;
                }
            }
            if ((count >= K && R[i] == "x") || (count < K && R[i] == "o")) {
                flag = false;
                break;
            }
        }
        if (flag) {
            ans += 1;
        }
    }

    cout << ans << endl;
    return 0;
}