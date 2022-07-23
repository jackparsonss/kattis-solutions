#include<iostream>
#include<string>

using namespace std;

int main() {
    int tests, gcount, mcount;
    string buffer;
    cin >> tests;
    
    for(int i = 0; i < tests; i++) {
        // remove empty line
        getline(cin, buffer);
        cin >> gcount >> mcount;

        int gsmallest{10001}, curr;
        for(int j = 0; j < gcount; j++) {
            cin >> curr;
            if(curr < gsmallest) {
                gsmallest = curr;
            }
        }

        int msmallest{10001};
        for(int j = 0; j < mcount; j++) {
            cin >> curr;
            if(curr < msmallest) {
                msmallest = curr;
            }
        }

        if(gsmallest == msmallest || msmallest < gsmallest) {
            cout << "Godzilla" << endl;
        } else {
            cout << "MechaGodzilla" << endl;
        }
    }
}
