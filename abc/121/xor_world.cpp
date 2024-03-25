#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;
using ll=long long;

int main() {
    ll A, B;
    cin >> A >> B;

    if(A > 0) A--;
    if(A % 4 == 2) A = 1 ^ A;
    else if(A % 4 == 1) A = 1;
    else if(A % 4 == 3) A = 0;

    if(B % 4 == 2) B = 1 ^ B;
    else if(B % 4 == 1) B = 1;
    else if(B % 4 == 3) B = 0;

    ll ans = A ^ B;

    cout << ans << endl;
}