#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
	map<char, int> count = {
        {'A', 0},
        {'2', 0},
        {'3', 0},
        {'4', 0},
        {'5', 0},
        {'6', 0},
        {'7', 0},
        {'8', 0},
        {'9', 0},
        {'T', 0},
        {'J', 0},
        {'Q', 0},
        {'K', 0},
    };
    string current;
    int largest{0};
    
    for(int i = 0; i < 5; i++) {
        cin >> current;
        char curr = current[0];
        count[curr]++;

        if(count[curr] > largest) {
            largest = count[curr];
        }
    }
    cout << largest << endl;
}
