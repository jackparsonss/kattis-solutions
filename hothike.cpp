#include<iostream>
#include<limits.h>

using namespace std;

int main() {
  int n, curr{41}, curr_i{-1};
  cin >> n;
  int temps[n];

  for(int i = 0 ; i < n; i++) {
    int temp;
    cin >> temp;
    temps[i] = temp;
  }

  for(int i = 0 ; i < n-2; i++) {
    int temp = max(temps[i], temps[i+2]);
    if(temp < curr) {
      curr = temp;
      curr_i = i;
    }
  }

  cout << curr_i + 1 << " " << curr << endl;
}
