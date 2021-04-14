//MLE, i think the real solution is throught bit manipulation -2-August-2020
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int solve(int k)
{
    if (k % 2 == 0 || k % 5 == 0)
        return -1;
    long long ans = 7 % k;
    int cnt = 1;
    while (ans != 0)
    {
        ans = (ans * 10 + 7) % k;
        cnt++;
    }
    return cnt;
}
int main()
{
    int k = 0;
    cin >> k;
    int ans = solve(k);
    cout << ans;
}
