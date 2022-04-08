#include<iostream>
#include<string>
#include<map>

int main() {
    int Q, N;
    std::cin >> N >> Q;
    std::map<int, int> people;

    std::string choice;
    int x, i, def = 0; // def is the default value to print for anyone not changed

    for(int k = 0; k < Q; k++){
        std::cin >> choice;

        if(choice.compare("SET") == 0){
            std::cin >> i >> x;
            people[i] = x;

        } else if(choice.compare("PRINT") == 0){
            std::cin >> i;
            if(people[i])
                std::cout << people[i] << std::endl;
            else
                std::cout << def << std::endl;

        } else if(choice.compare("RESTART") == 0) {
            std::cin >> x;
            def = x;
            people.clear();
        }  
    }
}