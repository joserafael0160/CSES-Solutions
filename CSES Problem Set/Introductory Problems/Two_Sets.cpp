/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1092
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, sum, targetSum;
  vector<int> set1, set2;
  cin >> n;
  sum = (n * (n + 1))/2;
  targetSum = sum/2;
  if (sum % 2 != 0) {
    cout << "NO";
    return 0;
  }
  cout << "YES \n";
  for (int i = n; i >= 1; --i) {
    if (targetSum >= i) {
        set1.push_back(i);
        targetSum -= i;
    } else {
        set2.push_back(i);
    }
  }
  
    // Imprimir los conjuntos
    cout << set1.size() << "\n";
    for (int num : set1) {
        cout << num << " ";
    }
    cout << "\n";
    cout << set2.size() << "\n";
    for (int num : set2) {
        cout << num << " ";
    }
    cout << "\n";
}