#include<iostream>
#include<math.h>

using namespace std;

int main() {
    long double A, N, radius, area;
    cin >> A >> N;

    radius = N / (M_PI * 2.0);
    area = M_PI * pow(radius, 2);

    if(area >= A){
        cout << "Diablo is happy!" << endl;
    } else {
        cout << "Need more materials!" << endl;
    }

}
