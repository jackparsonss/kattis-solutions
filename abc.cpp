#include<iostream>
#include<string>

using namespace std;

int main() {
    int first, second, third;
    string order;

    cin >> first >> second >> third >> order;
    int largest, second_largest, smallest;
    if(first > second) {
        if(first > third) {
            largest = first; 
            if(second > third) {
                second_largest = second;
                smallest = third;
            } else {
                second_largest = third;
                smallest = second;
            }
        } else {
            largest = third;
            second_largest = first;
            smallest = second;
        }
    } else {
        if(second > third) {
            largest = second;
            if(first > third) {
                second_largest = first;
                smallest = third;
            } else {
                second_largest = third;
                smallest = first;
            }
        } else {
            largest = third;
            second_largest = second;
            smallest = first;
        }
    }

    for(int i = 0; i < order.length(); i++){
        if(order[i] == 'A') {
            cout << smallest << " ";
        } else if(order[i] == 'B') {
            cout << second_largest << " ";
        } else {
            cout << largest << " ";
        }
    } 

    cout << endl;
}

