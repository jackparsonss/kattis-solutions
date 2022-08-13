#include<iostream>
#include<string>

using namespace std;

int main() {
  string adrian{"ABC"}, bruno{"BABC"}, goran{"CCAABB"}, seq;
  int n, ac{0}, bc{0}, gc{0};
  cin >> n >> seq;

  for(int i=0; i < n; i++) {
    char temp = seq[i];
    if(adrian[i % adrian.size()] == temp){
      ac++;
    } 
    if(bruno[i % bruno.size()] == temp){
      bc++;
    } 
    if(goran[i % goran.size()] == temp){
      gc++;
    }
  }

  int m = max(ac, bc);
  m = max(m, gc);

  cout << m << endl;
  if(ac == m) {
    cout << "Adrian" << endl;
  } 
  if(bc == m) {
    cout << "Bruno" << endl;
  } 
  if(gc == m) {
    cout << "Goran" << endl;
  }
}
