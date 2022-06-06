#include<iostream>

using namespace std;

int main() {
    long long n, P, R, F;
    cin >> n;
    while(n--) {
        cin >> P >> R >> F;
        long long count{0};
        while(P <= F){
            count++;
            P *= R;
        }
        cout << count << endl;
    }
}
