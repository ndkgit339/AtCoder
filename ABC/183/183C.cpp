#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N; cin >> N;
    int K; cin >> K;
    int T[10][10];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            int t; cin >> t;
            T[i][j] = t;
        }
    }

    vector<int> city;
    for (int i=1; i<N; i++) city.push_back(i);

    int ans = 0;
    do {
        int dist = T[0][city[0]];
        for (int i=0; i<N-2; i++) {
            dist += T[city[i]][city[i+1]];
        }
        dist += T[city[N-2]][0];

        if (dist == K) ans++;

    }while( next_permutation(city.begin(),city.end()) );

    cout << ans << endl;

    return 0;
}