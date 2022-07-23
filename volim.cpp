#include<iostream>

using namespace std;


int main() {
    int curr_p, n, curr_t, count{0};
    char curr_c;
    
    cin >> curr_p >> n;
    for(int i = 0; i < n; i++){
        cin >> curr_t >> curr_c;
        count += curr_t;

        if(curr_c == 'T' && count < 210) {
            curr_p = curr_p % 8 + 1;
        }
    }

    cout << curr_p << endl;
}
