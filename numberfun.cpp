#include<iostream>

using namespace std;

int main() {
    int n;
    long double a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if(a+b==c || a-b == c || b-a == c || a*b == c || a/b == c || b/a == c){
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
}
