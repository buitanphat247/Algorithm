#include<bits/stdc++.h>
using namespace std;
long long dem_uoc(long long n)
{
  long long z = sqrt(n), cnt = 0;
  for (long long i = 1; i <= z; i++)
  {
    if (n % i == 0)
    {
      if (i * i != n)
        cnt += 2;
      else
        cnt += 1;
    }
  }
  return cnt;
}
int main()
{
    long long k,tmp;
    cin>>k;
    tmp=k;
    vector<int> factors;
    long long d = 2;
    while (k > 1)
    {
        while (k % d == 0)
        {
            factors.push_back(d);
            k /= d;
        }
        d++;
        if (d*d > k)
        {
            if (k > 1)
                factors.push_back(k);
            break;
        }
    }
    for(long long i=0;i<factors.size();i++)
    {
        cout<<factors[i];
        if(i>(i-1)&&i!=factors.size()-1)
            cout<<"*";
    }
    cout<<endl<<dem_uoc(tmp)<<endl;
}
