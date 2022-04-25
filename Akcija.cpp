#include<iostream>
#include<algorithm>
#include<vector>

// https://open.kattis.com/problems/akcija

int main() {
	int n, temp, total = 0;
	std::cin >> n;
	int values[n];

	for(int i = 0; i < n; i++){
		std::cin >> temp;
		values[i] = temp;
	}

	std::sort(values, values+n, std::greater<int>());

	for(int i = 0; i < n; i += 3){
		int rem = n - i;
		if(rem < 3){
			for(int j = 0; j < rem; j++){
				total += values[n-j-1];
			}
			continue;
		}
		total += values[i] + values[i+1];
	}

	std::cout << total << std::endl;
}

