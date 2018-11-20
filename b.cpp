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
  vector<int> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  vector<int> check(n, 0);
  for(int i = 1; i < n - 1; i++)
  {
    if(a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1)
    {
      check[i - 1] = 1;
      check[i] = 1;
    }
  }
  int count = 0;
  int temp = 0;
  /*for(auto e : check)
  {
    cout << e << " ";
  }
  cout << endl;*/
  for(int i = 0; i < n; i++)
  {
    if(check[i] == 0)
    {
      if(temp == 0) continue;
      if(temp == 2)
      {
        count++;
      }else{
        count += ceil(temp / 4.0);
      }
      temp = 0;
    }else{
      temp++;
    }
  }
  cout << count << endl;
	return 0;
}
