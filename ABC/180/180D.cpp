#include <iostream>
using namespace std;

int main(){
    long long X,Y,A,B;
    cin >> X >> Y >> A >> B;

    long long exp_value = 0;
    while ( (double)X*A <= 1e18 && X*A < Y && A*X - (X+B) < 0 ) {
        X *= A;
        exp_value++;
    }
    exp_value += (Y - 1 - X) / B;

    cout << exp_value << endl;

    return 0;
}