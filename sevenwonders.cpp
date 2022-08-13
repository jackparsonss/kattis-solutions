#include<iostream>
#include<map>
#include<string>

int main() {
  std::string deck;
  std::map<char, int> count = {
    {'T', 0},
    {'C', 0},
    {'G', 0},
  };

  std::cin >> deck;


  for (int i = 0; i < deck.size(); i++) {
    char t = deck[i];
    count[t]++;
  }

  int m = std::min(count['T'],count['C']);
  m = std::min(count['G'],m);
  
  std::cout << count['T'] * count['T'] + count['C'] * count['C'] + count['G'] * count['G'] + 7 * m;
}
