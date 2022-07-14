#include<iostream>

int main() {
    int n, temp, total = 0;
    std::cin >> n;


    for(int i = 0; i < n; i++){
        std::cin >> temp;
        total += temp - 1;
    }

    std::cout << total+1 << std::endl;
}