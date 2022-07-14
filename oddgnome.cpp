#include<iostream>

using namespace std;

int main() {
    int n, g;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> g;
        int arr[g];
        for(int j = 0; j < g; j++){
            cin >> arr[j];
        }

        for(int j = 0; j < g-1; j++){
            if(arr[j] != arr[j+1]-1) {
                cout << j + 2 << endl;
                break;
            }
        }
    }
}
