#include <iostream>
using namespace std;
int main() {
  int arr[50], n, pos, ele;
  cout << " Enter number of elements: ";
  cin >> n;
  cout << " Enter elements : \n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Enter  position to insert 1 to " << n + 1 << endl;
  cin >> pos;
  cout << "Enter an element to  insert:     ";
  cin >> ele;

  for (int i = n - 1; i >= pos - 1; i--) {
    arr[i + 1] = arr[i];
  }
  arr[pos - 1] = ele;
  n++;
  cout << "Array after insert:\t " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "";
  }
  return 0;
}
