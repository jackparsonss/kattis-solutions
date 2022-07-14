#include<iostream>
#include<cmath>

using namespace std;

int main() {
    long double x;
    long double temp = 5280.0 / 4854.0 * 1000.0;
    cin >> x;
    int t = x * temp + 0.5;
    cout << t << endl;
}
