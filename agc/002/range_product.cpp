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
    int a, b;
    cin >> a >> b;
    if((a>=0 && b<=0) || (a<=0 && b>=0)) cout << "Zero" << endl;
    else if(a > 0 && b > 0) cout << "Positive" << endl;
    else {
        if((b-a+1)%2 == 0) cout << "Positive" << endl;
        else cout << "Negative" << endl;
    }
}