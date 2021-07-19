#include <bits/stdc++.h>

using namespace  std;

int main(int argc, char const *argv[])
{
    int current_state[3][3];
    int toggle[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> current_state[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (current_state[i][j])
            {
                toggle[i][j] += current_state[i][j];

                if(i > 0) toggle[i - 1][j] += current_state[i][j];
                if(i < 2) toggle[i + 1][j] += current_state[i][j];
                if(j > 0) toggle[i][j - 1] += current_state[i][j];
                if(j < 2) toggle[i][j + 1] += current_state[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if((toggle[i][j] % 2) != 0)
            cout << "0";
            else
            cout << "1";
        }
        cout << endl;
    }
    return 0;
}