#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long K, A, B;
    cin >> K >> A >> B;

    long long da = 0, db = 0;
    int tmp = 1;
    while(A>0) {
        da += (A%10)*tmp;
        A /= 10; tmp *= K;
    }
    tmp = 1;
    while(B>0) {
        db += (B%10)*tmp;
        B /= 10; tmp *= K;
    }

    cout << da*db << endl;
}