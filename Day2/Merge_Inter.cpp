
#include<bits/stdc++.h>
using namespace std;
typedef vector<int>             vi;

void merge(vi &arr1, vi arr2, int n, int m) {

  // code here 

  int gap = ceil((float)(n + m) / 2);
    while (gap > 0) {
    int i = 0;
    int j = gap;
    while (j < (n + m)) {
      if (j < n && arr1[i] > arr1[j]) {
        swap(arr1[i], arr1[j]);
      } else if (j >= n && i < n && arr1[i] > arr2[j - n]) {
        swap(arr1[i], arr2[j - n]);
      } else if (j >= n && i >= n && arr2[i - n] > arr2[j - n]) {
        swap(arr2[i - n], arr2[j - n]);
      }
      j++;
      i++;
    }
    if (gap == 1) {
      gap = 0;
    } else {
      gap = ceil((float) gap / 2);
    }
  }
  int j = 0;
    int i = (m+n-1);
    for(; arr1[i]==0; --i);

    while(j<3){
        arr1[++i] = arr2[j++];
    }

}
int main() {
  vector<int> arr1 = {1,4,7,8,10};
  vector<int> arr2 = {2,3,9};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;
  merge(arr1, arr2, 5, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 8; i++) {
    cout << arr1[i] << " ";
  }
  

}