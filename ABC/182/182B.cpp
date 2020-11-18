#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A; int a; for (int i=0; i<N; i++) { cin >> a; A.push_back(a); }

    int max_gcd = 0;
    int max_k;
    for (int k=2; k<1005; k++) {
        int gcd = 0;
        for (int i=0; i<N; i++) {
            if (A[i] % k == 0) gcd++;
        }
        if (gcd > max_gcd) { max_k = k; max_gcd = gcd; }
    }

    cout << max_k << endl;

    return 0;
}