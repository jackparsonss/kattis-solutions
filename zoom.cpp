#include<iostream>

int main() {
	int n, q, current;
	std::cin >> n >> q;
	for(int i = 1; i <= n; i++){
		std::cin >> current;
		if(i % q == 0) {
			std::cout << current << " ";
		}
	}
}