#include<iostream>

using namespace std;

int main() {
    int n, curr;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> curr;
        a[i] = curr;
    }

    for(int i = n-1; i >= 0; i--) {
        cout << a[i] << endl;
    }
}
