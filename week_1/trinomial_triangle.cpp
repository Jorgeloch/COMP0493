#include <bits/stdc++.h>

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

ull solve(ull n) {
  ull result = 1;
  for (ull i = 0; i < n; i ++) {
    result *= 3;
  }
  return result;
}

int main (void) {
  ull row, result;

  cin >> row;

  result = solve(row);

  cout << result << endl;

  return 0;
}
