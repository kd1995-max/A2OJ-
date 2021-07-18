#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int num;
            cin >> num;
            
            if (num & 1)
            {
                cout << abs(i - 3) + abs(j - 3);
            }
        }
    }

    return 0;
}
