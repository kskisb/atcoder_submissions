#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<char> ch(4);
    for(int i=0; i<4; i++) cin >> ch[i];
    vector<int> a(4);
    for(int i=0; i<4; i++) a[i] = ch[i] - '0';

    bool flag = false;
    int tmp_b, tmp_c, tmp_d;
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            for(int k=0; k<2; k++) {
                if(i == 0) tmp_b = a[1];
                else tmp_b = -a[1];
                if(j == 0) tmp_c = a[2];
                else tmp_c = -a[2];
                if(k == 0) tmp_d = a[3];
                else tmp_d = -a[3];
                if(a[0] + tmp_b + tmp_c + tmp_d == 7) {
                    cout << a[0];
                    if(i == 0) cout << '+'; cout << tmp_b;
                    if(j == 0) cout << '+'; cout << tmp_c;
                    if(k == 0) cout << '+'; cout << tmp_d << "=7" << endl;;
                    return 0;
                }
            }
        }
    }
}