#include<iostream>

int main() {
    int x, n, total, current;
    total = 0;

    std::cin >> x >> n;
    for(int i = 0; i < n; i++){
        std::cin >> current;
        total += x - current;
    }

    total += x; // add current month

    std::cout << total << std::endl;
}