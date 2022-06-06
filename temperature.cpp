# include<iostream>
# include <iomanip>
#include<cmath>

using namespace std;

int main() {
    long long int x, y;
    cin >> x >> y;
    if (x == 0 && y == 1){
        cout << "ALL GOOD" << endl;
    }
    else if(y == 1){
        cout << "IMPOSSIBLE" << endl;
    } else {
        long double t = x / (1.0 - y);
        if(round(t) == t){
            cout << (int)t << endl;
        } else {
            cout << fixed << setprecision(9);
            cout << t << endl;
        } 
    }
}

// # }
// # x, y = input().strip().split(" ")
// # x = int(x)
// # y = int(y)

// # if x == 0 and y == 1:
// #     print("ALL GOOD")
// # elif y == 1:
// #     print("IMPOSSIBLE")
// # else:
// #     print(x / (1.0 - y))
