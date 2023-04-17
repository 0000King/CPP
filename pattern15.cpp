#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    int i, j, k;
    for(i = n; i >= 1; i--)
    {
        k = i;
        for(j = 1; j <= n; j++)
        {
            cout << k;
            if(k < n)
                k += 1;
        }
        cout << endl;
    }
    return 0;
}