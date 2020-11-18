#include <iostream>
using namespace std;

int main(){
    string N; cin >> N;
    int mod[3] = {};

    for ( int i=0; i<N.size(); i++ ) mod[ int(N[i]) % 3 ]++;

    int ans = -1;
    if ( (mod[1] + mod[2]*2) % 3 == 0 ) {
        ans = 0;
    }
    else if ( (mod[1] + mod[2]*2) % 3 == 1 ) {
        if (mod[1] >= 1) ans = 1;
        else ans = 2;
    }
    else {
        if (mod[2] >= 1) ans = 1;
        else ans = 2;
    }

    if (ans == N.size() || ans == -1) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}