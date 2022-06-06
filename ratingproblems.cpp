#include<iostream>

int main(){
    int n, k;
    float avg{0};

    std::cin >> n >> k;

    for(int i = 0; i < k; i++){
        int cur;
        std::cin >> cur;
        avg += (float)cur;
    }

    float min_avg = avg;
    float max_avg = avg;

    for(int i = 0; i < n - k; i++){
        min_avg -= 3.0f;
    }

    for(int i = 0; i < n - k; i++){
        max_avg += 3.0f;
    }

    min_avg /= n;
    max_avg /= n;
    std::cout << min_avg << " " << max_avg << std::endl;
}