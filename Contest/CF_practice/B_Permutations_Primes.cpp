#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int primality(vector<int> &a, int n) {
  int count = 0;
  for (int l = 0; l < n; l++) {
    int mex = 0;
    for (int r = l; r < n; r++) {
      if (a[r] > mex) {
        mex = a[r];
      } else if (mex == 0) {
        break;
      }
      if (mex == r + 1) {
        count++;
      }
    }
  }
  return count;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 1; i <= n; i++) {
    a[i - 1] = i;
  }
  int max_primality = 0;
  vector<int> max_perm;
  for (auto perm : a) {
    int primality_ = primality(perm, n);
    if (primality_ > max_primality) {
      max_primality = primality_;
      max_perm.push_back(perm) ;
    }
  }
  for (int i : max_perm) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
