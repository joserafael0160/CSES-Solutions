/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1083
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n, a;
  cin >> n;
  int sum = 0;
  
  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }
  n--;
  while (n--) {
    cin >> a;
    sum -= a;
  }
  cout << sum;
}