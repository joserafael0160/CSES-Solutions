/**************************************************************
Author: José Rafael Pérez Rivero

Platform: CSES
Excercise: https://cses.fi/problemset/task/1069
**************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  string characters;
  cin >> characters;
  char lastLetter = characters[0];
  int max = 0;
  int counter = 0;
  for (int i = 0; i < characters.size(); i++) {
    if (lastLetter == characters[i]) {
      counter++;
    }
    else {
      lastLetter = characters[i];
      counter = 1;
    }
    if (counter > max) max = counter;
  }
  cout << max;
}