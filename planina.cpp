#include<iostream>

int main() {
    int n;
    std::cin >> n;

    int amount = 1, total = 2;
    for(int i=1; i <= n; i++){
        total += amount;
        amount *= 2;
    }

    std::cout << total * total << std::endl;
}