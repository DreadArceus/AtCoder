//TLE on 4/7, because of course - 2-August-2020
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int solve(vector<int> v, int l, int r)
{
  unordered_set<int> s(v.begin() + l - 1, v.begin() + r);
  return s.size();
}
int main()
{
  int n = 0, q = 0;
  cin >> n >> q;
  vector<int> balls(n);
  for(int i = 0; i < n; i++)
  {
    cin >> balls[i];
  }
  while(q--)
  {
    int l = 0, r = 0;
    cin >> l >> r;
    int ans = solve(balls, l, r);
    cout << ans << "\n";
  }
}
