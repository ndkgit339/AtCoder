#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> digit(10);
    for (char c : s) digit[c - '0']++;

    if (s.size() == 1 && digit[8]) { cout << "Yes" << endl; return 0; }
    if (s.size() == 2) {
        if (stoi(s)%8 == 0) { cout << "Yes" << endl; return 0; }
        swap(s[0], s[1]);
        if (stoi(s)%8 == 0) { cout << "Yes" << endl; return 0; }
    }
    for (int i=112; i<1000; i+=8) {
        auto c = digit;
        if (c[i % 10]) {
            c[i % 10]--;
            if (c[(i / 10) % 10]) {
                c[(i / 10) % 10]--;
                if (c[i / 100]) { cout << "Yes" << endl; return 0; }
            }
        }
    }

    cout << "No" << endl;

    return 0;
}