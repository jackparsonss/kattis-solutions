#include<iostream>
#include<string>

int main() {
    int n;
    int vol = 7;
    std::string s;

    std::cin >> n;
    std::string temp;
    std::getline(std::cin, temp);

    for(int i = 0; i < n; i++) {
        std::getline(std::cin, s);
        if(s.compare("Skru op!") == 0 && vol != 10){
            vol++;
        } else if(s.compare("Skru ned!") == 0 && vol != 0){
            vol--;
        }
    }
    std::cout << vol << std::endl;
}