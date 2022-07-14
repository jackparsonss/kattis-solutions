#include<iostream>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int x = (a > b) ? 1 : 0;
    std::cout << x << std::endl;

    return 0;
}