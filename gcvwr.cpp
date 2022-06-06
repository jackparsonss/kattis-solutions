#include<iostream>

using namespace std;

int main() {
    int G, T, N, curr, cap;
    cin >> G >> T >> N;
    cap = (G - T) * 0.9;
    for (int i = 0; i < N; i++)
    {
        cin >> curr;
        cap -= curr;     
    }
    cout << cap << endl; 
}