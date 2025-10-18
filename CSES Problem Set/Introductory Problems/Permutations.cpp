/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1070
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a;
  cin >> a;
  if (a > 1 && a < 4) {
    cout << "NO SOLUTION";
    return 0;
  }
  for (int i = a - 1; i > 0; i -= 2) cout << i << " ";
  for (int i = a; i > 0; i -= 2) cout << i << " ";
  
}