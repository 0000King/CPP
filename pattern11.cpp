#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int i, j;
    for(i = 1; i <= n; i++)
    {
        for(j = 5; j >= i; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}