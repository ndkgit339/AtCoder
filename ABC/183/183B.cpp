#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;

    double ans_x = sx + (gx - sx) * sy / (sy + gy);

    cout << fixed << setprecision(10) << ans_x << endl;

    return 0;
}