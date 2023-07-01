#include<bits/stdc++.h>
using namespace std;

void setup(long long d[], long long n[]) {
  d[1] = 4; n[1] = 2;
  d[2] = 2; n[2] = 0;
  d[3] = 2; n[3] = 3;
  d[4] = 2; n[4] = 3;
  d[5] = 3; n[5] = 1;
  d[6] = 2; n[6] = 3;
  d[7] = 3; n[7] = 3;
  d[8] = 2; n[8] = 1;
  d[9] = 4; n[9] = 3;
  d[10] = 3; n[10] = 3;
}

long long dung(long long x, long long i, long long d[], long long n[]) {
  if (i == 2)
    return d[x/10 + 1] + d[x%10 + 1];
  else
    return d[x + 1];
}

long long ngang(long long x, long long i, long long d[], long long n[]) {
  if (i == 2)
    return n[x/10 + 1] + n[x%10 + 1];
  else
    return n[x + 1];
}

int main() {
  long long v, h, d[11], n[11], t[24][60][3];
  setup(d, n);
  cin >> v >> h;

  for (long long i = 0; i <= 23; i++) {
    for (long long j = 0; j <= 59; j++) {
      if (i > 9) {
        t[i][j][1] = dung(i, 2, d, n) + dung(j, 2, d, n);
        t[i][j][2] = ngang(i, 2, d, n) + ngang(j, 2, d, n);
      }
      else {
        t[i][j][1] = dung(i, 1, d, n) + dung(j, 2, d, n);
        t[i][j][2] = ngang(i, 1, d, n) + ngang(j, 2, d, n);
      }
    }
  }

  for (long long i = 0; i <= 23; i++) {
    for (long long j = 0; j <= 59; j++) {
      if (t[i][j][1] == v && t[i][j][2] == h) {
        cout << i;
        if (j <= 9)
          cout << ":0" << j << endl;
        else
          cout << ":" << j << endl;
        return 0;
      }
    }
  }

  return 0;
}
