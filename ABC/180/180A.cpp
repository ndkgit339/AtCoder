#include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int A; cin >> A;
    int B; cin >> B;

    int ans = N - A + B;
    cout << ans << endl;

    return 0;
}