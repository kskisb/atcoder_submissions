#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    while(true) {
        C -= B;
        A -= D;
        if(C <= 0) {
            cout << "Yes" << endl;
            break;
        } else if(A <= 0) {
            cout << "No" << endl;
            break;
        }
    }
}