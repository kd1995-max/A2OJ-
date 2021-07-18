#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n , t;
    cin >> n >> t;
    string population;
    cin >> population;

    while (t--)
    {
        for (int i = 1; i < population.size(); i++)
        {

            if(population[i - 1] == 'B' && population[i] == 'G')
            swap(population[i - 1] , population[i]) , i++;
        }
    }

    cout << population << endl;
    return 0;
}