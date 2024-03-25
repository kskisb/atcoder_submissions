#include <iostream>
#include <string>
using namespace std;

int main() {
    string O, E;
    cin >> O >> E;

    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i < E.size(); i++) {
        cout << O[cnt1]; cnt1++;
        cout << E[cnt2]; cnt2++;
    }
    if(O.size() > E.size()) cout << O[cnt1];
    cout << endl;
}