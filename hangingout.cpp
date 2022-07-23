#include<iostream>
#include<string>

using namespace std;

int main() {
    int limit, events, amount{0}, count{0}, curr;
    string type;

    cin >> limit >> events;
    for(int i = 0; i < events; i++) {
        cin >> type >> curr;
        if(type == "enter"){
            if(amount + curr > limit) {
                count++; // reject
            } else {
                amount += curr; // add people
            }
        }else if(type == "leave"){
            amount -= curr; // remove people
        }
    }

    cout << count << '\n';
}
