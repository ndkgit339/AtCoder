#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int main(){
    long N; cin >> N;
    set<long> divisors;    

    for ( long i=1; i<=sqrt(N); i++ ) {
        if ( N % i == 0 ) {
            divisors.insert( i );
            if ( N / i == i ) break;
            else divisors.insert( N / i );
        }
    }

    for ( auto divisor:divisors ) cout << divisor << endl;

    return 0;
}