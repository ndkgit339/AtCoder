#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long long ll;

int main(){
    int N; cin >> N;
    vector<int> X, Y;
    int x, y;
    for (int i=0; i<N; i++) {
        cin >> x >> y;
        X.push_back(x); Y.push_back(y);
    }
    
    int dx1,dx2,dy1,dy2;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                dx1 = X[j] - X[i]; dy1 = Y[j] - Y[i];
                dx2 = X[k] - X[i]; dy2 = Y[k] - Y[i];
                if (dx1 * dy2 == dx2 * dy1) { cout << "Yes" << endl; return 0; }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}