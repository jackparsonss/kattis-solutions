#include<iostream>
#include<string>

using namespace std;

int main() {
    string s1, s2 = "";
    cin >> s1;

    for(int i = 0; i < s1.length()-1; i++){
        if(s1[i] != s1[i+1]){
            s2 += s1[i];
        }
    }

    cout << s2 + s1[s1.length()-1] << endl;
}
