#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <math.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> s(n, 0);
  vector<int> number(2 * 100000 + 1, 0);
  for(int i = 0; i < n; i++)
  {
    cin >> s[i];
    number[s[i]]++;
  }
  int l = 1;
  int r = n;
  while(r - l > 1)
  {
    int m = (l + r) / 2;
    //cout << m << endl;
    int count = 0;
    for(int i = 0; i < 2 * 100000 + 1; i++)
    {
      if(number[i] >= m){
        count += number[i] / m;
      }
    }
    if(count >= k)
    {
      l = m;
      //cout << "l = " << l << endl;
    }else{
      r = m;
      //cout << "r = " << r << endl;
    }
  }
  //cout << l << endl;
  vector<int> result;
  for(int i = 0; i < 2 * 100000 + 1; i++)
  {
    if(k <= 0) break;
    if(number[i] >= l)
    {
      //cout << "k = " << k << endl;
      for(int j = 0; j < number[i] / l; j++)
      {
        result.push_back(i);
        k--;
        if(k <= 0) break;
      }
    }
  }
  for(int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  cout << endl;
  return 0;
}
