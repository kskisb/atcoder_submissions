#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool flag = false;
    for(int i=1; i<=9; i++) {
        for(int j=1; j<=9; j++) {
            if(N == i*j) {
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}