#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;
    bool is = false;
    cin >> str;

    for(int i = 0; i < str.size() - 1; i++) {
        if(str[i] == 's' && str[i+1] == 's'){
            is = true;
        }
    }

    if(is){
        cout << "hiss" << endl;
    } else {
        cout << "no hiss" << endl;
    }
}
