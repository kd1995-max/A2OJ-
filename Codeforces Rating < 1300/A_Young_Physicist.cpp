#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    int sum_a = 0 , sum_b = 0 , sum_c = 0;
    while(T--)
    {
        int a;
        cin >> a;
        sum_a += a;
        int b;
        cin >> b;
        sum_b += b;
        int c;
        cin >> c;
        sum_c += c;
    }

    if(sum_a == 0 and sum_b == 0 and sum_c == 0)
    cout << "YES" <<endl;
    else
    cout << "NO" <<endl;

    return 0;
}
