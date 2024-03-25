#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int N = S.size();
    for(int i=0; i<N; i++) {
        S = S[N-1] + S.substr(0, N-1);
        if(S == T) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}