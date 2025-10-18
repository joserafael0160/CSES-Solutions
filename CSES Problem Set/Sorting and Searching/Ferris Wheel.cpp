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
  long n, x;
  cin >> n >> x;
  vector<long> p(n);
  for (long i = 0; i < n; i++) cin >> p[i];
  sort(p.begin(), p.end());
  long count =0;
  long i = 0, j = n - 1;
   while (i <= j) {
    if (p[i] + p[j] <= x) {
      i++;
    }
    j--;
    count++;
  }

  cout << count;
}

int main() {
  IOS;


  solve();
  

  return 0;
}