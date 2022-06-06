#include<iostream>

using namespace std;

int main() {
    int s0, s1, r0, r1, p1, p2;
    cin >> s0 >> s1 >> r0 >> r1;
    while(s0 != 0 && s1 != 0 && r0 != 0 && r1 != 0) {
        if((s0 == 1 && s1 == 2) || (s0 == 2 && s1 == 1)){
            p1 = 3;
        }
        if((r0 == 1 && r1 == 2) || (r0 == 2 && r1 == 1)){
            p2 = 3;
        }

        cin >> s0 >> s1 >> r0 >> r1;
    }
}
