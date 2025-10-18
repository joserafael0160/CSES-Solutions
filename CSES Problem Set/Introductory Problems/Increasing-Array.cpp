/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1094
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  long n;
  cin >> n;
  long sum = 0;
  long lastNumber;
  cin >> lastNumber;
  n--;
  while (n--) {
    long a;
    cin >> a;
    if (lastNumber > a) sum += lastNumber - a;
    else lastNumber = a;
  }
  cout << sum;
}