#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int order[n];
    for (int i = 0; i < n-1; i++) {
        int temp;
        cin >> temp;
        order[temp+1] = i+2;
    }

    cout << "1 ";
    for(int i = 1; i < n; i++) {
        cout << order[i] << " ";
    }
}
