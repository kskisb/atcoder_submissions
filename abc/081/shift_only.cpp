#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    
    int min_cnt = 100, tmp_cnt = 0;
    for(int i=0; i<N; i++) {
        while(A[i]%2 == 0 && A[i] != 0) {
            A[i] /= 2; tmp_cnt++;
        }
        min_cnt = min(min_cnt, tmp_cnt);
        tmp_cnt = 0;
    }
    cout << min_cnt << endl;
}