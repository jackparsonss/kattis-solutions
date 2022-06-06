#include<iostream>
#include<string>

using namespace std;

int main() {
    string str;

    // scanf("%s", &str);
    cin >> str;

    if(str.rfind("555", 0) == 0){
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}
