#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int up = 0,low = 0;
    for (int i = 0;i < str.size();i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        up++;
        else
        low++;
    }

    if (low >= up)
    {
        for (int i = 0;i < str.size();i++)
        {
           str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
    else
    {
        for (int i = 0;i < str.size();i++)
        {
           str[i] =  toupper(str[i]);
        }
        cout << str << endl;
    }
    return 0;
}
