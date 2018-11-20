#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <math.h>

using namespace std;

int main()
{
  int n;
  cin >> n; 
  using ll = long long int;
  vector<ll> a(n, 0);
  map<ll, int> is_exist;
  ll total = 0;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
    total += a[i];
    is_exist[a[i]]++;
  }  
  vector<int> result;
  for(int i = 0; i < n; i++)
  { 
    ll new_total = total - a[i];
    if(new_total % 2 == 1) continue;
    new_total /= 2;
    if(is_exist.count(new_total) > 0)
    {
      if(new_total == a[i])
      {
        if(is_exist[new_total] > 1)
        {
          result.push_back(i);
        }
      }else{
        result.push_back(i);
      }
    }
  }
  if(result.size() > 0)
  {
    cout << result.size() << endl;
    for(auto e : result)
    {
      cout << e + 1 << " ";
    }
    cout << endl;
  }else{
    cout << result.size() << endl << endl;
  }
	return 0;
}
