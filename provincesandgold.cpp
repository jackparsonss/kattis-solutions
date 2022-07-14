#include<iostream>

using namespace std;

int main() {
   int G, S, C;
   cin >> G >> S >> C;
   int spending = G * 3 + S * 2 + C * 1;
   if(spending >= 8) {
       cout << "Province or ";
   } else if(spending >= 5){
       cout << "Duchy or ";
   } else if(spending >= 2){
       cout << "Estate or ";
   }

   if(spending >= 6) {
       cout << "Gold" << endl;
   } else if(spending >= 3) {
       cout << "Silver" << endl;
   } else {
       cout << "Copper" << endl;
   }
}
