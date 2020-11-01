#include <iostream>
#define ROW 3
#define COL 6
using namespace std;
int array[ROW][COL] = {{1, 2, 3, 4, 5, 6},
   {7, 8, 9, 10, 11, 12},
   {13, 14, 15, 16, 17, 18}};
void dispSpiral(int m, int n){
   int i, currRow = 0, currCol = 0;
   while (currRow < ROW && currCol < COL){
      for (i = currCol; i < n; i++){ //print the first row normally
      cout << array[currRow][i]<<" ";
   }
   currRow++; //point to next row
   for (i = currRow; i < m; ++i){ //Print the last column
      cout << array[i][n-1]<<" ";
   }
   n--; //set the n-1th column is current last column
   if ( currRow < m){ //when currRow is in the range, print the last row
      for (i = n-1; i >= currCol; --i){
         cout << array[m-1][i]<<" ";
      }
      m--; //decrease the row range
   }
   if (currCol < n){ //when currCol is in the range, print the fist column
      for (i = m-1; i >= currRow; --i){
         cout << array[i][currCol]<<" ";
      }
      currCol++;
      }
   }
}
int main(){
   dispSpiral(ROW, COL);
}
