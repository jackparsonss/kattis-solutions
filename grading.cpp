#include<iostream>

int main() {
	int a, b,c,d,e, val;
	std::cin >> a >> b >> c >> d >> e >> val;

	if(val < e) {
		std::cout << "F" << std::endl;
	} else if(val < d){
		std::cout << "E" << std::endl;
	} else if(val < c){
		std::cout << "D" << std::endl;
	} else if(val < b){
		std::cout << "C" << std::endl;
	} else if(val < a){
		std::cout << "B" << std::endl;
	} else {
		std::cout << "A" << std::endl;
	}
}