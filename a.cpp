#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <math.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  using ll = long long int;
  vector<ll> as(t, 0);
  vector<ll> bs(t, 0);
  vector<ll> ks(t, 0);
  for(int i = 0; i < t; i++)
  {
    ll a, b, k;
    cin >> a >> b >> k;
    as[i] = a;
    bs[i] = b;
    ks[i] = k;
  }
  for(int i = 0; i < t; i++)
  {
    int atime = ceil(ks[i] * 0.5);
    int btime = ks[i] / 2;
    cout << atime * as[i] - btime * bs[i] << endl;
  }
	return 0;
}
