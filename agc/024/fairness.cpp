#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits.h>
#include <map>
using namespace std;

int main() {
    int A, B, C;
    unsigned long long K;
    cin >> A >> B >> C >> K;

    if(K%2 == 0) cout << A - B << endl;
    else cout << B - A << endl;
}