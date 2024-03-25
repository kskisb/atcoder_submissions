#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X, m_sum = 0, m_min = 1000000;
    cin >> N >> X;
    vector<int> m(N);
    for(int i=0; i<N; i++) {
        cin >> m[i];
        m_sum += m[i];
        if(m[i] < m_min) m_min = m[i];
    }

    cout << N + (X-m_sum)/m_min << endl;
}