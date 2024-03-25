#include <iostream>
#include <string>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    string a_str = "", b_str = "";

    for(int i=0; i<b-'0'; i++) a_str += a;
    for(int i=0; i<a-'0'; i++) b_str += b;

    if(a_str < b_str) cout << a_str << endl;
    else cout << b_str << endl;
}