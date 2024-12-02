#include <bits/stdc++.h>

typedef uint64_t ull;
typedef int64_t ll;

using namespace std;

int main (void) {
  ull rows, columns;

  cin >> rows >> columns;

  while (rows != 0 && columns != 0) {

    // allocate matrix of chars (image)
    vector<vector<char>> image (rows);
    for (ull i = 0; i < rows; i++) {
      image[i].resize(columns);
    }

    // read the input, char by char, to the allocated array
    for (ull i = 0; i < rows; i++) {
      for (ull j = 0; j < columns; j++) {
        cin >> image[i][j];
      }
    }

    // get the new matrix size
    ull new_row_size, new_column_size, row_ratio, column_ratio;
    cin >> new_row_size >> new_column_size;

    // get the ratio of image increasing
    row_ratio = new_row_size / rows;
    column_ratio = new_column_size / columns;

    // print out the resized image
    for (ull i = 0; i < new_row_size; i++) {
      ull cur_row = i / row_ratio;
      for (ull j = 0; j < new_column_size; j++) {
        ull cur_column = j / column_ratio;
        cout << image[cur_row][cur_column];
      }
      cout << endl;
    }

    cout << endl;

    cin >> rows >> columns;
  }

  return 0;
}
