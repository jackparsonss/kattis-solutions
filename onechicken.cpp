#include<iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x < y) {
        if(y - x == 1) {
            cout << "Dr. Chaz will have " << y - x << " piece of chicken left over!" << endl;
        } else {
            cout << "Dr. Chaz will have " << y - x << " pieces of chicken left over!" << endl;
        }
    } else {
        if(x - y == 1){
            cout << "Dr. Chaz needs " << x - y << " more piece of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << x - y << " more pieces of chicken!" << endl;
        }
    }
}
