#include <bits/stdc++.h>
using namespace std;

const long long MAX_WORDS = 10000;

bool check(string a, string b)
{
  for (long long i = 0; i < a.size(); i++)
  {
    if (a[i] != b[i])
    {
      if (i > 0 && a[i] == a[i - 1])
      {
        while (a[i] != b[i] && a[i] == a[i - 1])
          a.erase(a.begin() + i);
      }
      else
        return false;
    }
  }
  return a == b;
}

int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);

  long long cnt = 0;
  string s1, s2;
  getline(cin, s1);
  getline(cin, s2);

  string words1[MAX_WORDS], words2[MAX_WORDS];
  long long size1 = 0, size2 = 0;
  string word_demo = "";

  // Split s1 into words and store them in words1
  for (long long i = 0; i < s1.size(); i++)
  {
    if (s1[i] == ' ' || i == s1.size() - 1)
    {
      words1[size1] = word_demo;
      word_demo = "";
      size1++;
    }
    else
      word_demo += s1[i];
  }

  // Split s2 into words and store them in words2
  for (long long i = 0; i < s2.size(); i++)
  {
    if (s2[i] == ' ' || i == s2.size() - 1)
    {
      words2[size2] = word_demo;
      word_demo = "";
      size2++;
    }
    else
      word_demo += s2[i];
  }
  for(long long i=0;i<size1;i++)
  {
      cout<<words1[i]<<endl;
  }
  for (long long i = 0; i < size1; i++)
  {
    if (words1[i] == words2[i] || check(words1[i], words2[i]))
      cnt++;
  }

  cout << cnt << endl;

  return 0;
}
