#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string S_first, S_second;
    int N, t_first = 0, t_second = 0;
    cin >> N;
    string tmp_s;
    int tmp_t;
    for(int i=0; i<N; i++) {
        cin >> tmp_s >> tmp_t;
        if(tmp_t > t_first) {
            t_second = t_first; t_first = tmp_t;
            S_second = S_first; S_first = tmp_s;
        } else if(tmp_t > t_second) {
            t_second = tmp_t; S_second = tmp_s;
        }
    }
    cout << S_second << endl;
}