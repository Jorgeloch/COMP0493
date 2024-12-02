#include <bits/stdc++.h>

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

ull n_factor(ull n, ull factor) {
  ull result = 1;
  ll counter = n;

  while (counter >= 1) {
    result *= counter;
    counter -= factor;
  }

  return result;
}

int main (void) {
  ull t;
  cin >> t;

  while (t--) {
    ull value, n_bangs, result;
    string bangs;

    cin >> value >> bangs;

    n_bangs = bangs.length();
    result = n_factor(value, n_bangs);

    cout << result << endl;
  }

  return 0;
}
