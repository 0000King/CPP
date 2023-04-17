#include <iostream>
#include <math.h>
using namespace std;

int subsequences(string str[], string output[])
{
    if(*str == "\0")
    {
        *output = "";
        return 1;
    }
    int a = subsequences(str+1, output);
    int i;
    for(i = 0; i < a; i++)
    {
        if(*(output+i) == "\0")
            *(output+a+i) = str[0] + *(output+i);
        else
            *(output+a+i) = str[0] + ", " + *(output+i);
    }
    return 2 * a;
}

int main()
{
    int size;
    cout << "Enter size of set" << endl;
    cin >> size;
    string *str = new string[size+1];
    string *str1 = new string[(int)pow(2,size)];
    int i = 0;
    for(; i < size; i++)
        cin >> str[i];
    str[i] = "\0";
    int n = subsequences(str, str1);
    i = 0;
    str1[0] = "{}";
    cout << "{ ";
    for(; i < n; i++)
    {
        if(i == 0)
            cout << str1[i] << ", ";
        else if(i == n-1)
            cout << "{ " << str1[i] << " }";
        else
            cout << "{ " << str1[i] << " },";
    }
    cout << " }";
    return 0;
}