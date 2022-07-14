#include<iostream>

int main() {
    int n, curr, total = 0;
    std::cin >> n;
    
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        total += curr;
    }

    std::cout << total << std::endl;
}