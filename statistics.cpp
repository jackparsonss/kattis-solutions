#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, temp, minimum, maximum, j{1};
    while(cin >> n){
        vector<int> v;
        for(int i = 0; i < n; i++){
            cin >> temp;
            v.push_back(temp);
        }
        minimum = *min_element(v.begin(), v.end());
        maximum = *max_element(v.begin(), v.end());
        cout << "Case " << j << ": " << minimum << " " << maximum << " " << maximum - minimum << endl;
        j++;
    }
}
