#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int cnt = 0;
    for(int i=A; i<=B; i++) {
        int tmp = i;
        if(tmp/10000 == tmp%10 && (tmp/1000)%10 == (tmp%100)/10) {
            cnt++;
        }
    }
    cout << cnt << endl;
}