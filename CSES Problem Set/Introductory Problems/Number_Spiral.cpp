/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(n)
**************************************************************/

#include <bits/stdc++.h>

#define INF 1E9 + 7
#define NEG_INF -1E9
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define long long long
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl
const int MOD = 1000000007;

using namespace std;

void solve() {
  long  y, x;
  cin >> y >> x;
  long  layer = max(x, y);
  long  number;

  if (layer % 2 == 0) {
    // capa par: esquina inferior izquierda
    if (y == layer)
      number = layer * layer - (x - 1);
    else
      number = (layer - 1) * (layer - 1) + y;
  } else {
    // capa impar: esquina superior derecha
    if (x == layer)
      number = layer * layer - (y - 1);
    else
      number = (layer - 1) * (layer - 1) + x;
  }

  cout << number << endl;
}



int main() {
  IOS;

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}