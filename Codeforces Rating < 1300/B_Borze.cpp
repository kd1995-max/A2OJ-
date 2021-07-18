#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    int i;
    for (i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        cout << 0 ;
        else if(str[i] == '-' && str[i+1] == '.')
        {
            cout << 1;
            i++;
        }
        else if(str[i] == '-' && str[i] == '-')
        {
            cout << 2;
            i++;
        }
    }
    cout << endl;
    return 0;
}
