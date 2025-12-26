#include <iostream>
using namespace std;

int main() {
  int arr[10];
  int k, i;
  bool f = false;
  cout << "Enter elements: \n";
  for (i = 0; i < 10; i++) {
    cin >> arr[i];
  }
  cout << "Enter key element to search: \n";
  cin >> k;
  for (i = 0; i < 10; i++) {
    if (arr[i] == k) {
      cout << "Element found at: " << i + 1 << endl;
      f = true;
      break;
    }
  }
  if (!f) {
    cout << "Element not found\n";
  }
  cout << sizeof(int);
  return 0;
}

// Time complexity is BigO(n)
// Space complexity is BigO(1)
// use sizeOf function
