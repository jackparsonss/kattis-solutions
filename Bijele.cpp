#include<iostream>

using namespace std;

int main() {
	int curr;
	int peices[6] = {1, 1, 2, 2, 2, 8};
	for(int i = 0; i < 6; i++) {
		cin >> curr;
		cout << peices[i] - curr << " ";
	}

	cout << endl;

}
