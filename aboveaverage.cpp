#include<iostream>
#include<iomanip>

int main() {
    int C, N, curr, total;
    float avg;

    std::cin >> C;

    for(int i = 0; i < C; i++) {
        std::cin >> N;
        avg = 0;
        total = 0;
        int students[N];
        // compute average
        for(int j = 0; j < N; j++) {
            std::cin >> curr;
            students[j] = curr;
            avg += (float)curr;   
        }
        avg /= (float)N;

        for(int j = 0; j < N; j++) {
            if((float)students[j] > avg){ 
                total++;
            }
        }

        float percentage = (float)total / (float)N * 100.0f;
        std::cout << std::fixed;
        std::cout << std::setprecision(3);
        std::cout << percentage << "%" << std::endl;
    }
}