#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int year;
    cin >> year;
    while(true)
    {
        year++;

        int a = year % 10;
        int b = (year/10) % 10;
        int c = (year/100) % 10;
        int d = (year / 1000);

        if (a != b && a!= c && a != d && b != a && b != c && b != d && c != a && c!=b && c!=d && d != a && d!= b && d!= c)
        {cout << year << endl; break;}
    }
    return 0;
}