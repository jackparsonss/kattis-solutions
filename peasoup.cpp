#include<iostream>
#include<string>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    int restaurants = stoi(line);
    int acceptable = 0;
    string ans;
    while(restaurants--){
        getline(cin, line);
        int items = stoi(line);
        getline(cin, line);
        string name = line;
        bool pea = false;
        bool pancakes = false;
        while(items--){
            getline(cin, line);
            if(line == "pea soup"){
                pea = true;
            } else if(line == "pancakes"){
                pancakes = true;
            }   
        }
        if(pea && pancakes){
            if(acceptable == 0){
                ans = name;
            } 
            acceptable++;
        }
    }
    if(acceptable == 0 || acceptable == restaurants){
        cout << "Anywhere is fine I guess" << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
