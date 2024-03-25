#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

bool isprime(int p) {
    for(int i=2; i*i<=p; i++) if(p%i == 0) return false;
    return true;
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    for(int i=A; i<=B; i++) {
        bool takahashi_win = true;
        for(int j=C; j<=D; j++) {
            if(isprime(i+j)) takahashi_win = false;
        }
        if(takahashi_win) {
            cout << "Takahashi" << endl;
            return 0;
        }
    }
    cout << "Aoki" << endl;
}