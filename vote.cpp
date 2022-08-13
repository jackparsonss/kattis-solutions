#include<iostream>

using namespace std;

int main() {
  int t, n;
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n;
    int totalVotes{0}, temp, winner{0}, winner_i;
    bool tie;
    for(int j = 0; j < n; j++) {
      cin >> temp;
      totalVotes += temp; 
      if(temp == winner) {
        tie = true;
      } else if(temp > winner) {
        winner = temp;
        winner_i = j;
        tie = false;
      }
    }
    int majority = totalVotes / 2;

    if(tie) {
      cout << "no winner" << endl;
    } else if(winner > majority) {
      cout << "majority winner " << winner_i + 1 << endl;
    } else {
      cout << "minority winner " << winner_i + 1 << endl;
    }
  }
}
