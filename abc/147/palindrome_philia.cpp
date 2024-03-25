#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size(), cnt = 0;
    for(int i=0; i<N/2; i++) {
        if(S[i] != S[N-i-1]) cnt++;
    }
    cout << cnt << endl;
}