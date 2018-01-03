#include <iostream>

using namespace std;

void printMap(char arrMap[][5])
{
 for (int i = 0; i < 5; i++)
 {
  for (int k = 0; k  < 5; k++)
  {
   cout << arrMap[i][k] << "   ";
  }
  cout << endl;
 }
}

int main()
{
 char board [5][5];
 
 for(int i = 0;i < 5; i++)
 {
  for(int k = 0; k < 5; k++)
  {
   board[i][k] = char(65 + i + k);
  }
 }

 printMap (board);

 return 0;
}
