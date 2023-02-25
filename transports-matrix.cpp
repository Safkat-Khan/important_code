#include <iostream>
using namespace std;

int main() {
   int Array1[100][100], Array2[100][100], row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> Array1[i][j];
      }
   }


   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << Array1[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }


   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         Array2[j][i] = Array1[i][j];
      }


   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << Array2[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}
