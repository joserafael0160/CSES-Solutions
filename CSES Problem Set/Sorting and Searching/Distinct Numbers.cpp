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
  int n;
  cin >> n;
  vector<long> x;
  for (int i = 0; i < n; i++) {
    long a;
    cin >> a;
    x.push_back(a);
  }

  sort(x.begin(), x.end());
  
  int count = 1;
  
  for (int i = 0; i < n - 1; i++) {
    if (x[i] != x[i + 1])
      count++;
  }
  cout << count << endl;
}

int main() {
  IOS;

  solve();
  

  return 0;
}