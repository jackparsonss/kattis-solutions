#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    float q, y, QALY{0};

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> q >> y;

        QALY += (q * y);
    }
    cout << fixed;
    cout << setprecision(3);
    cout << QALY << endl;
}
