#include<iostream>

using namespace std;

int main() {
    int sweet, sour;
    while(true){
        cin >> sweet >> sour;
        if(sweet == 0 && sour == 0){
            break;
        }
        if(sweet + sour == 13) {
            cout << "Never speak again." << endl;
        } else if(sweet > sour) {
            cout << "To the convention." << endl;
        } else if(sweet < sour) {
            cout << "Left beehind." << endl;
        } else {
            cout << "Undecided." << endl;
        }
    }
    
}
