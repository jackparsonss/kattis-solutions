#include<iostream>

using namespace std;

int main() {
    int n, dm, di, counter{0};
    cin >> n >> dm;
    for(int i = 0; i < n; i++){
        cin >> di;
        if(di > dm) {
            counter++;
        } else {
            break;
        }
        if(i == n-1){
            cout << "It had never snowed this early!" << endl;
            exit(0);
        }
    }
    
    cout << "It hadn't snowed this early in " << counter << " years!" << endl;
    
}
