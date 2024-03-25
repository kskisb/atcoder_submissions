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
    int N, A, B;
    cin >> N >> A >> B;
    int dist = B - A - 1;
    if(dist%2 != 0) cout << "Alice" << endl;
    else cout << "Borys" << endl;
}