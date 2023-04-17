#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int i, j;
    for(i = n; i >= 1; i--)
    {
        for(j = n; j > i; j--)
            cout << " ";
        for(j = i + i - 1; j >= 1; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}