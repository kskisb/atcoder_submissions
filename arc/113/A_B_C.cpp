#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
#include <set>
using namespace std;
using ll=long long;

int main() {
    ll A, B, C;
    cin >> A >> B >> C;

    vector<ll> pow_A(11);
    pow_A[1] = A%10;
    for(int i=2; i<11; i++) pow_A[i] = (pow_A[i-1]*A)%10;
    for(int i=1; i<11; i++) cout << pow_A[i] << endl;
    cout << endl;
    
    vector<ll> pow_B(11);
    pow_B[1] = B%10;
    for(int i=2; i<11; i++) {
        pow_B[i] = (pow_B[i-1]*B)%10;
        if(pow_B[i] == 0) pow_B[i] = 1;
    }
    for(int i=1; i<11; i++) cout << pow_B[i] << endl;
    cout << endl;

    ll index = C%10;
    if(index == 1) index = 1;

    cout << pow_A[pow_B[index]] << endl;
}