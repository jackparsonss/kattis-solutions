#include<iostream>

using namespace std;

int main() {
	int k, n, m;
	cin >> k >> m >> n;
	std::cout << ((k % (m+n)) < m ? "Barb" : "Alex") << endl;
}
