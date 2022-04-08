#include<iostream>
#include<string>

int main() {
    std::string str;
    std::cin >> str;
    int e_cnt = 0;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'e'){
            e_cnt++;
        }
    }
    e_cnt *= 2;
    std::cout << 'h';
    for(int i = 0; i < e_cnt; i++){
        std::cout << 'e';
    }
    std::cout << 'y' << std::endl;
}