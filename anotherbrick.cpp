#include<iostream>

using namespace std;

int main() {
    int h, w, n, temp_w, curr;
    cin >> h >> w >> n;
    temp_w = w;
    for(int i = 0; i < n; i++){
        cin >> curr;
        temp_w -= curr;
        if(temp_w == 0){
            h--;
            if(h == 0){
                cout << "YES" << endl;
                break;
            } else {
                temp_w = w;
            }
        }
        if(temp_w < 0){
            cout << "NO" << endl;
            break;
        }
    }
}