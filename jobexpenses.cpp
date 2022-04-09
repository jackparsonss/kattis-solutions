#include<iostream>

using namespace std;

int main() {
    int n, curr, total{0};
    cin >> n;
    for(int i=0; i< n; i++){
        cin >> curr;
        if(curr < 0){
            total -= curr;
        }
    }

    cout << total << endl;
}
