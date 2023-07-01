#include<bits/stdc++.h>
using namespace std;
long long sum_div(long long n)
{
    long long sum=0;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
                sum+=i+n/i;
            else
                sum+=i;
        }
    }
    return sum;
}
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
    long long   a;
    cin>>a;
    cout<<dem_uoc(a)<<" "<<sum_div(a)<<endl;
}
