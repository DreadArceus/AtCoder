#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int solve(vector<vector<int> > v, int d)
{
  int cnt = 0;
  for(vector<int> local : v)
  {
    if(sqrt(pow(local[0],2) + pow(local[1],2)) <= d)
    {
      cnt++;
    }
  }
  return cnt;
}
int main()
{
  int n = 0, d = 0;
  cin >> n >> d;
  vector<vector<int> > points(n);
  for(int i = 0; i < n; i++)
  {
    vector<int> local(2);
    cin >> local[0] >> local[1];
    points[i] = local;
  }
  int ans = solve(points, d);
  cout << ans;
}
