/*
thuật toán đếm ước số trong khoảng
for (long long i = 1; i <= mod; i++)
  for (long long j = i; j <= mod; j += i)
    dp[j]++;
-----------------------------------
thuật toán sinh hoán vị
void solve(long long pos)
{
    if(pos==s.size())
        sit.insert(s);
    for(long long i=pos; i<s.size(); i++)
    {
        swap(s[i],s[pos]);
        solve(pos+1);
        swap(s[i],s[pos]);
    }
}
-----------------------------------
Các bước thực hiện của kỹ thuật đánh dấu tần số xuất hiện từ a tới b như sau:
Khởi tạo một mảng freq ban đầu với các giá trị bằng 0.
Với mỗi sự kiện được xác định bởi hai tham số s và e, tăng giá trị tại vị trí s trong mảng freq lên 1 và giảm giá trị tại vị trí e+1 trong mảng freq đi 1.
Duyệt qua mảng freq từ vị trí a đến b và tính tổng giá trị tại các vị trí đó, tổng này chính là tần số xuất hiện của các sự kiện trong khoảng thời gian từ a đến b.
-----------------------------------
ct tính tích modulu 1 số
(a * b) % mod = ((a % mod) * (b % mod)) % mod
(a + b) % mod = ((a % mod) + (b % mod)) % mod
(a / b) % mod = (a % (b * mod) / b) % mod
(a / b) % mod = ((a % mod) / (b % mod)) % mod
-----------------------------------
Cho N! trong các ước có dạng 2 mũ k  của số N tìm số mũ K lớn nhất
công thức
http://www.chuyentin.pro/2021/08/e-thi-tuyen-sinh-lop-10-chuyen-tin.html
x=1
p=2
while(n/pow(p,x)!=0)
{
  cnt+=n/pow(p,x);
  x++;
}
-----------------------------------
phân tích thừa số nguyên tố n nhanh nhất c++
set<long long> primeFactors(long long n)
{
    set<long long> factors;
    while (n % 2 == 0)
    {
        factors.insert(2);
        n = n / 2;
    }
    for (long long i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            factors.insert(i);
            n = n / i;
        }
    }
    if (n > 2)
        factors.insert(n);
    return factors;
}
------------------------------------
thuật toán đếm số chính phương từ 1 tới end
long long countPerfectSquares(long long start, long long end) {
    long long count = 0;
    long long sqrtStart = ceil(sqrt(start));
    long long sqrtEnd = floor(sqrt(end));
    count = sqrtEnd - sqrtStart + 1;
    return count;
}
------------------------------------
Công thức đếm số ước của x từ trong đoạn a tới b
c1
long long countDivisibleNumbers(long long a, long long b, long long x)
{
    long long cnt = 0;
    if (a % x == 0)
        cnt++;
    cnt += b / x - a / x;
    return cnt;
}
c2
long long countDiv(long long x)
{
    return (b / x) - ((a - 1) / x);
}
------------------------------------
đếm không tận cùng của N!
while(n>0)
        n/=5,cnt+=n;
------------------------------------
Công thức tính cấp số cộng khi đầu tiên ta có 1 và sao bao nhiêu vị trí thứ I ta có giá trị lớn hơn N
với N là giá trị ta nhập vào
long long   cinndDays(long long n) {
    long long days = ceil(sqrt(2 * n + 0.25) - 0.5);
    return days;
}
------------------------------------
công thức hoán vị vòng tròn
Tạo chuỗi kết quả
k = k % n;
vector<long long> result(n);
for (long long i = 0; i < n; i++)
{
    long long newPos = (i - k + n) % n; // Vị trí mới sau khi xoay k lần
    result[newPos] = arr[i];
}
for(auto it:mp)
    cout<<it    cinrst<<" "<<it.second<<endl;
------------------------------------
đếm ước của N!
int degree2(int n,int p)
{
    int ans=0;
    for(int i=p;i<=n;i*=p)
        ans+=n/i;
    return ans;
}
int nt(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return n>1;
}
long long cntdiv(int n)
{
    long long res=1;
    for(long long i=1;i<=n;i++)
    {
        if(nt(i))
            res*=(degree2(n,i)+1);
    }
    return res;
}
------------------------------------
thuật toán tìm ước nguyên tố lớn nhất của 1 số
for (long long i = 2; i <= MOD; i++)
        if (largestPrimeFactor[i] == 0)
            for (long long j = i; j <= MOD; j += i)
                largestPrimeFactor[j] = i;
------------------------------------
thuật toán đếm số cặp có tổng bằng B
c1
for (long long i = 1; i < n; i++)
{
    long long p1 = lower_bound(a.begin(), a.begin() + i, B - a[i]) - a.begin();
    long long p2 = upper_bound(a.begin(), a.begin() + i, B - a[i]) - a.begin() - 1;
    ans += p2 - p1 + 1;
}
c2
map<long long, long long> mp;
for (long long i = 0; i < n; i++)
{
    long long tmp = k - v[i];
    sum += mp[tmp];
    mp[v[i]]++;
}

*/