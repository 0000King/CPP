#include<iostream>
using namespace std;


int main()
{
  int n;
  cout << "Enter number of rows" << endl;
  cin >> n;
  int i, j, k, l = 1;
  for(i = n; i >= 1; i--)
  {
    for(j = 1; j <= i; j++)
      cout << j;
    for(k = 1; k < l; k++)
      cout << "*";
      j -= 1;
    for(; j >= 1; j--)
      cout << j;
    l += 2;
    cout << endl;
  }
  return 0;
}
