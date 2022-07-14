#include<iostream>

using namespace std;

bool check(int i, int j, int n) {
    if(i + j == n) {
        return true;
    }

    int sum{0}, k{0};

    while(sum < n) {
        if(k % 2 == 0) {
            sum += i;
        } else {
            sum += j;
        }
        k++;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for(int i = 2; i < n; i++) {
        for(int j = i-1; j <= i; j++){
            if(check(i,j,n)) {
                cout << i << "," << j << endl;
            }
            // if(i == j && n % i == 0){
            //     cout << i << "," << j << endl;
            // }
        }
    }
}
