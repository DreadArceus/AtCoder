//MLE, i think the real solution is throught bit manipulation -2-August-2020
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int numConvert(vector<char> v)
{
  int num = 0;
  for(int i = 0; i < v.size(); i++)
  {
    num += 7 * pow(10, i);
  }
  return num;
}
int solve(int k)
{
  int i = k;
  while(i % 2 == 0)
  {
    i /= 2;
  }
  if(i == 1)
  {
    return -1;
  }
  vector<char> num;
  while(numConvert(num) < k)
  {
    num.push_back('7');
  }
  while(true)
  {
    int n = numConvert(num);
    if(n % k == 0)
    {
      return num.size();
    }
    num.push_back('7');
  }
  return -1;
}
int main()
{
  int k = 0;
  cin >> k;
  int ans = solve(k);
  cout << ans;
}
