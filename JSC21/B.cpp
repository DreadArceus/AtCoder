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

void solveCase()
{
    int n = 0, m = 0;
    cin >> n >> m;
    int map[1001];
    memset(map, 0, sizeof(map));
    for(int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        map[x]++;
    }
    for(int i = 0; i < m; i++)
    {
        int x = 0;
        cin >> x;
        map[x]++;
    }
    for(int i = 0; i < 1001; i++)
    {
        if(map[i] == 1)
            cout << i << " ";
    }
}

int32_t main()
{
    solveCase();
}