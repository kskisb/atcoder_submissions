#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    if(B-A < 2*K) {
        for(int i=A; i<=B; i++) {
            cout << i << endl;
        }
    } else {
        for(int i=0; i<K; i++) cout << A+i << endl;
        for(int i=K-1; i>=0; i--) cout << B-i << endl;
    }
}