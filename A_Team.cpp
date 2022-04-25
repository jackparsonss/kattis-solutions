#include<iostream>

using namespace std;

int main() {
    int n, curr, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int choice = 0;
        for(int j = 0; j < 3; j++){
            cin >> curr;
            if(curr == 1){
                choice++;
            }
        }
        if(choice > 1){
            total++;
        }
    }
    cout << total << endl;
}
