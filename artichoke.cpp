#include<iostream>
#include<math.h>

double helper(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a*k + b) + cos(c * k + d) + 2);
}

int main() {
    int p, a, b, c, d, n;
    double values[n];
    std::cin >> p >> a >> b >> c >> d >> n;

    for(int i = 0; i < n; i++) {
        values[i] = helper(p, a, b, c, d, i);
    }

    double curr = 0.00;
    for(int i = 0; i < n-1; i++) {
        for(int j = i; j < n; j++) {
            // double val = abs((values[i] - values[j]));
            // if(val > curr) {
            //   curr = val;
            // }
        }
    }

    std::cout << curr << std::endl;
}