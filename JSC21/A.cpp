#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
using namespace std;
#define int long long
#define pii pair<int, int>

void solveCase()
{
    int x = 0, y = 0, z = 0;
    cin >> x >> y >> z;
    long double cost1 = (long double)(y * z) / x;
    cout << long(cost1) - ((y * z) % x == 0);
}

int32_t main()
{
    solveCase();
}