#include<iostream>
#include<string>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << (s1.size() >= s2.size() ? "go" : "no") << endl;

}