#include <iostream>
using namespace std;

int main() {
    int S;
    cin >> S;
    if(S/100 >= 1 && S/100 <= 12) {
        if(S%100 >= 1 && S%100 <= 12) cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    } else {
        if(S%100 >= 1 && S%100 <= 12) cout << "YYMM" << endl;
        else cout << "NA" << endl;
    }
}