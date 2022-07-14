#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

int main() {
    int n, total{0};
    string type;
    cin >> n;
    map<string, int> count;
    map<string, int> count2;

    for(int i = 0; i < n; i++) {
        cin >> type;
        int val = count[type];
        
        count[type]++;
        
    }

    for(int i = 0; i < n; i++) {
        cin >> type;
        int val = count2[type];
        
        count2[type]++;
       
    }
    for (auto const& [key, val] : count)
	{
        total += min(val, count2[key]);
	}
    cout << total << endl;
}
