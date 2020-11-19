#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << fixed << setprecision(15);

    int N; cin >> N;
    vector<long long> X; long long x; for (int i=0; i<N; i++) { cin >> x; X.push_back(x); }

    /* マンハッタン距離・チェビシェフ距離については、double型を使うと誤差が出る */

    long long m_dist = 0;
    for (int i=0; i<N; i++) m_dist += abs(X[i]);

    double u_dist = 0;
    for (int i=0; i<N; i++) u_dist += double(X[i]) * double(X[i]);
    u_dist = sqrt(u_dist);

    long long c_dist = 0;
    for (int i=0; i<N; i++) c_dist = max(c_dist, abs(X[i]));

    cout << m_dist << endl;
    cout << u_dist << endl;
    cout << c_dist << endl;

    return 0;
}