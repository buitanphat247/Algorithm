#include <bits/stdc++.h>
using namespace std;
int x, d, t, v, dx, dd, dt, dv;

void giai()
{
    int bcnn_xt = (dx * dt) / __gcd(dx,dt); //60
    int nx = bcnn_xt / dx;  // 5
    int nt = bcnn_xt / dt;  // 4
    int r_xt = min(x/nx,t/nt);  //3
    int canh_xt = r_xt * bcnn_xt;

    int bcnn_dv = (dd*dv)/__gcd(dd,dv);
    int nd = bcnn_dv / dd;
    int nv = bcnn_dv / dv;
    int r_dv = min(d/nd,v/nv);
    int canh_dv = bcnn_dv * r_dv;

    int s = canh_xt * canh_dv;
    cout << s << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> x >> dx >> d >> dd >> t >> dt >> v >> dv;
    giai();
    return 0;
    //https://codeforces.com/gym/347815/problem/6E
}
