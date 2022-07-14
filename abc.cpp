#include<iostream>
#include<algorithm>

int main() {
    int largest, middle, smallest;
    char curr;

    std::cin >> largest;
    std::cin >> middle;
    if(middle > largest){
        std::swap(largest, middle);
    }

    std::cin >> smallest;

    if(smallest > largest){
        std::swap(largest, smallest);
    } 
    if(smallest > middle){
        std::swap(smallest, middle);
    }

    for(int i = 0; i < 3; i++){
        std::cin >> curr;
        switch(curr){
            case 'A':
                std::cout << smallest << " ";
                break;
            case 'B':
                std::cout << middle << " ";
                break;
            case 'C':
                std::cout << largest << " ";
                break;
        }
    }
}