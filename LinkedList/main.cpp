#include <iostream>

using namespace std;

bool isSmaller(int arr[], int i, int j ) {
  cout << "Comparing " << arr[i] << " and " << arr[j] << endl;
  if (arr[i] < arr[j]) {
    return true;
  } else {
    return false;
  }
}

void swap(int arr[], int i, int j) {
  cout << "Swapping " << arr[i] << " and " << arr[j] << endl;
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;

}


void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int c = 1; c < n - i; c++) {
      int p = c - 1;
      if (isSmaller(arr, c, p)) {
        swap(arr, c, p);
      }
    }
  }

}

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
}



int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  bubbleSort(arr, n);
  print(arr, n);

}

