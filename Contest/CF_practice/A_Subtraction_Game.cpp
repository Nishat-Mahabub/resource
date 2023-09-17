#include <iostream>

using namespace std;

bool is_winning_position(int n, int a, int b) {
  if (n < a) {
    return false;
  }
  if (n % (a + b) == 0) {
    return true;
  }
  return false;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int a, b;
    cin >> a >> b;
    int n = 2 * a * b;
    while (!is_winning_position(n, a, b)) {
      n++;
    }
    cout << n << endl;
  }
  return 0;
}