#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n, current;
    cin >> n;
    while(n--) {
        vector<int> v;
        cin >> current;
        while (current != 0) 
        {
            v.push_back(current); 
            cin >> current;
        }
        int count{0};
        for(int i = 0; i < v.size()-1; i++){
            if(v[i] * 2 < v[i+1]){
                count += v[i+1] - (2*v[i]);
            }
        }
        cout << count << endl;
    }
}
