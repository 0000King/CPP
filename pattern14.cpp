#include<iostream>
using namespace std;


int main() 
{
    int n;
    cout << "Enter number of rows" << endl;
    cin >> n;
    if(n % 2 == 0)
        return 0;
    int i, j;
    for(i = 1; i <= (n/2 + 1); i++)
    {
            for(j = n/2; j >= i; j--)
                cout << " ";
            for(j = 1; j <= (i + i - 1); j++)
                cout << "*";
        cout << endl;
    }
    for(i = n/2; i >= 1; i--)
    {
        for(j = n/2; j >= i; j--)
            cout << " ";
        for(j = (i + i -1); j >= 1; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}