/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(nlogn)
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
  int n, m;
  cin >> n >> m;
  long k;
  cin >> k;
  vector<long> a, b;
  for (int i = 0; i < n; i++) {
    long x;
    cin >> x;
    a.push_back(x);
  }
  for (int i = 0; i < m; i++) {
    long x;
    cin >> x;
    b.push_back(x);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());


  int i = 0, j = 0, count = 0;
  while (i < n && j < m) {
    long x = a[i], y = b[j];
    if (abs(x - y) <= k){
      count++;
      i++; j++;
    }
    else if (x > y) j++;
    else i++;
  }
  cout << count;
}

int main() {
  IOS;


  solve();
  

  return 0;
}