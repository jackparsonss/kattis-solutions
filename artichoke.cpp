#include<iostream>
#include<cmath>

double helper(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a*k + b) + cos(c * k + d) + 2);
}

int main() {
    int p, a, b, c, d, n;
    int values[n];
    std::cin >> p >> a >> b >> c >> d >> n;

    for(int i = 0; i < n; i++) {
        values[i] = helper(p, a, b, c, d, i);
    }
}