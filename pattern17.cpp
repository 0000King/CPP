#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int i, j, k = 1;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            cout << j;
        for(j = 1; j < k; j++)
            cout << "*";
        k += 2;
        for(j = i; j >= 1; j--)
            cout << j;
        cout << endl;
    }
    return 0;
}