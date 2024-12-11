#include <bits/stdc++.h>

using namespace std;

int main (void) {
  int t;
  while (cin >> t) {
    // using string because the number can have up to 200 digits, so it would
    // possibly not fit in uint64_t or even _uint128_t
    vector<string> numbers(t);
    int size, count = 0;

    // read the first entrie
    cin >> numbers[0];

    // get the fixed size of the numbers of this fixed block
    size = numbers[0].size();

    // get the next t - 1 numbers
    for (int i = 1; i < t; i++) {
      cin >> numbers[i];
    }

    // sort the numbers so the masks used will be the best because when
    //  the numbers are in increasing order, they will have the same prefix
    sort(numbers.begin(), numbers.end());

    for (int i = 1; i < t; i++) {
      for (int j = 0; j < size; j++) {
        if (numbers[i - 1][j] != numbers[i][j]) break;
        count++;
      }
    }
    cout << count << endl;
  }
}
