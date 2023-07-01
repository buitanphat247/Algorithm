#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define str string
#define pb push_back
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Input(name)                 \
  freopen(name ".inp", "r", stdin); \
  freopen(name ".out", "w", stdout)
#define mod 1000000001
ll check[mod], F[mod], z[mod][mod];
// check dùng đánh dấu thành phố nào đã đi 
// z dùng để lưu giữ giá trị mảng 2 chiều 
// F dùng để lựa ra phương án tối ưu 
ll cost_min = 1e9, cost, MIN = 1e9;
ll n, m, s = 0; // n là số lượng điểm còn m là số lưỡng đường đi
ll x, y; // x là thành phố ban đầu y là thành phố lúc sau
void TRY(ll i)
{
  if (s + cost_min * (n - i + 1) >= MIN)
    return;
  for (ll j = 2; j <= n; j++)
  {
    if (check[j] == 0)
    {
      F[i] = j;
      check[j] = 1;
      s += z[F[i - 1]][j];
      if (i == n)
      {
        if (s + z[F[n]][F[1]] < MIN)
          MIN = s + z[F[n]][F[1]];
      }
      else
        TRY(i + 1);
      s -= z[F[i - 1]][j], check[j] = 0;
    }
  }
}
int main()
{
  fast();
  Input("1");
  cin >> n >> m;
  memset(check, 0, sizeof(check));
  for (ll i = 1; i <= m; i++)
  {
    cin >> x >> y >> cost;
    z[x][y] = cost, z[y][x] = cost, z[i][i] = 0;
    if (z[x][y] != 0)
      cost_min = min(cost_min, z[x][y]);
  }
  F[1] = 1;
  check[1] = 1;
  TRY(2);
  cout << MIN << endl;
}
