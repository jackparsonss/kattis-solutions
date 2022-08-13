#include<iostream>
#include<map>
using namespace std;

void one() {
  cout << 7 << endl;
}

void two(int A[]) {
  if(A[0] > A[1]) {
    cout << "Bigger";
  } else if(A[0] == A[1]) {
    cout << "Equal";
  } else {
    cout << "Smaller";
  }
}

void three(int A[]) {
  int first = A[0], second = A[1], third = A[2];
  if(first > second) {
    if(first > third) {
      cout << third << endl;
    } else {
      cout << first << endl;
    }
  } else {
    if(second > third) {
      cout << third << endl;
    } else {
      cout << second << endl;
    }
  }
}

void four(int A[], int n) {
  int sum{0};
  for(int i=0; i < n; i++){
    sum += A[i];
  }
  cout << sum << endl;
}

void five(int A[], int n) {
  int sum{0};
  for(int i=0; i < n; i++){
    if(A[i] % 2 == 0){
      sum += A[i];
    }
  }
  cout << sum << endl;
}

void six(int A[], int n) {
    map<int, char> conv = {
      {0, 'a'},
      {1, 'b'},
      {2, 'c'},
      {3, 'd'},
      {4, 'e'},
      {5, 'f'},
      {6, 'g'},
      {7, 'h'},
      {8, 'i'},
      {9, 'j'},
      {10, 'k'},
      {11, 'l'},
      {12, 'm'},
      {13, 'n'},
      {14, 'o'},
      {15, 'p'},
      {16, 'q'},
      {17, 'r'},
      {18, 's'},
      {19, 't'},
      {20, 'u'},
      {21, 'v'},
      {22, 'w'},
      {23, 'x'},
      {24, 'y'},
      {25, 'z'},
  };
  for(int i=0; i < n; i++){
    A[i] %= 26;
    cout << conv[A[i]];
  }
  cout << endl;
}

void seven(int A[], int n) {
  int i{0};
  while(true){
    int temp = i;
    i = A[i];
    if(i == n-1) {
      cout << "Done" << endl;
      break;
    }
    if(i > n-1) {
      cout << "Out" << endl;
      break;
    }
    if(temp == A[i]) {
      cout << "Cyclic" << endl;
      break;
    }
  }
}


int main() {
	int n, t;
  cin >> n >> t;
  int arr[n];

  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    arr[i] = temp;
  }

  switch (t)
  {
  case 1:
    one();
    break;
  case 2:
    two(arr);
    break;
  case 3:
    three(arr);
    break;
  case 4:
    four(arr, n);
    break;
  case 5:
    five(arr, n);
    break;
  case 6:
    six(arr, n);
    break;
  case 7:
    seven(arr, n);
    break;
  default:
    break;
  }
}