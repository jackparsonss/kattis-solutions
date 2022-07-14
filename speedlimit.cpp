#include<iostream>

using namespace std;

int main() {
    int n, total;
    cin >> n;
    while(n != -1){
        int items[n][2];

        for(int i = 0; i < n; i++) {
            cin >> items[i][0];
            cin >> items[i][1];
        }
        total = items[0][0] * items[0][1];
        for(int i = 1; i < n; i++) {
            total += items[i][0] * (items[i][1] - items[i-1][1]);
        }
        cout << total << " miles" << endl;
        cin >> n;
    }
}
