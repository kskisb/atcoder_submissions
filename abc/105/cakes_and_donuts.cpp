#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    bool flag = false;
    for(int i=0; i*4<=N; i++) {
        for(int j=0; j*7<=N; j++) {
            if(i*4 + j*7 == N) flag = true;
        }
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}