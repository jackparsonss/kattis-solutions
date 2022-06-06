#include<iostream>
#include<limits.h>

using namespace std;

int main() {
    int n, curr{INT32_MAX}, best, temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == curr) continue;

        if(temp < curr) {
            best = i;
            curr = temp;
        }
    }
    cout << best << endl;
}
