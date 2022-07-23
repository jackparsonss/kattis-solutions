#include<iostream>
#include <algorithm>
#include <iterator>
#include<string>

// using namespace std;

int main() {
  int n;
  std::string temp;
  std::cin >> n;
  
  std::string names[n];
  std::string cpy[n];

  for(int i = 0; i < n; i++){
    std::cin >> temp;
    names[i] = temp;
  }

  std::copy(names, names+n, cpy);
  std::sort(cpy, cpy+n);
  
  for(int i = 0; i < n; i++){
    if(names[i] == cpy[i]) {
      if(i == n-1) {
        std::cout << "INCREASING" << std::endl;
        return 0;
      }
    } else {
      break;
    }
  }

  int j = n-1;
  for(int i = 0; i < n; i++){
    if(names[i] == cpy[j]) {
      j--;
      if(i == n-1){
        std::cout << "DECREASING" << std::endl;
        return 0;
      }
    } else{
      break;
    }


  }

  std::cout << "NEITHER" << std::endl;
  return 0;

}
