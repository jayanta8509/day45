// Write Program to find smallest and largest element in an array
#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 20, 5, 40, 30};
  int n = sizeof(arr) / sizeof(arr[0]);

  int smallest = arr[0];
  int largest = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
    }
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  cout << "Smallest element: " << smallest << endl;
  cout << "Largest element: " << largest << endl;

  return 0;
}
