#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int a = min(100*A/8, B*10), b = max(100*A/8, B*10);
    for(int m=a; m<=b+1; m++) {
        int tmp1 = m*0.08, tmp2 = m*0.1;
        if(tmp1 == A && tmp2 == B) {
            cout << m << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}