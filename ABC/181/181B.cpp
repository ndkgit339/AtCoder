#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    long long a, b, sum = 0;
    for (int i=0; i<N; i++) {
        cin >> a >> b;
        sum += (a + b) * (b - a + 1) / 2;
    }
    cout << sum << endl;

    return 0;
}