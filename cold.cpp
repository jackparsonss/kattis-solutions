#include<iostream>

int main() {
    int n, current, total = 0;
    std::cin >> n;
    for(int i =0; i < n; i++) {
        std::cin >> current;
        if(current < 0){
            total++;
        }
    }

    std::cout << total << std::endl;
}