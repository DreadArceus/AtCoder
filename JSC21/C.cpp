#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;
#define int long long
#define pii pair<int, int>
#define MAX_N 200001

bool prime[MAX_N];

void solveCase()
{
    int a = 0, b = 0;
    cin >> a >> b;
    for (int i = b; i >= a; i--)
    {
        if(prime[i]) continue;
        for (int j = a; j < i; j++)
        {
            if (i == j)
                continue;
            if (i % j == 0)
            {
                cout << j;
                return;
            }
        }
    }
    cout << 1;
}

int32_t main()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= MAX_N; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= MAX_N; i += p)
                prime[i] = false;
        }
    }
    solveCase();
}