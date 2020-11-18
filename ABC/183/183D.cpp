#include <iostream>
#include <map>
using namespace std;

int main(){
    int N; cin >> N;
    long long W; cin >> W;
    map<int, long long> ST;

    int s_max = 0;
    for ( int i=0; i<N; i++ ) {
        int s; cin >> s; s_max = max(s_max, s);
        int t; cin >> t;
        long long p; cin >> p;

        if ( ST.count(s) ) ST[s] += p;
        else ST[s] = p;

        if ( ST.count(t) ) ST[t] -= p;
        else ST[t] = -p;
    }

    long long water = 0;
    for ( int time=0; time<=s_max; time++ ) {
        if ( ST.count(time) ) water += ST[time];
        if ( water > W ) { cout << "No" << endl; return 0; }
    }

    cout << "Yes" << endl;

    return 0;
}