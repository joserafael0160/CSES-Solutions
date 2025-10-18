/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1068
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  long a;
  cin >> a;
  cout << a;
  while (a != 1) {
    if (a % 2 == 0) a /= 2;
    else a = (a * 3) + 1;

    cout << " " << a;
  }
}