#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int i, j;
    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            cout << (char)('A' + j - 1);
        cout << endl;
    }
    return 0;
}