#include<iostream>

int main() {
    int n, curr;

    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> curr;
        if(curr % 2 == 0){
            std::cout << curr << " is even" << std::endl;
        } else {
            std::cout << curr << " is odd" << std::endl;
        }
    }
}