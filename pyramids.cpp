#include<iostream>

using namespace std;

int main() {
    int N, height{1}, temp, curr{3};

    cin >> N;

    while(true) {
        temp = 0;
        for(int i = 1; i <= curr; i += 2) {
            temp += (i * i);
        }
        if(N < temp) {
            cout << height << endl;
            return 0;
        }
        else {
            height++;
            curr += 2;
        }
    }
}
