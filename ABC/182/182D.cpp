#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    vector<long long> A; long long a; for (long long i=0; i<N; i++) { cin >> a; A.push_back(a); }

    long long pos = 0, pos_max = 0;
    long long move = 0, move_max = 0;
    for (int i=0; i<N; i++) {
        move += A[i];
        move_max = max(move_max, move);
        pos_max = max(pos_max, pos + move_max);
        pos += move;
    }

    cout << pos_max << endl;

    return 0;
}