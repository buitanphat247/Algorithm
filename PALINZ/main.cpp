#include<bits/st
using namespace std;
int main() {
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s; cin >> s;
	long long m; cin >> m;
	long long l, r;
	while(m--){
		cin >> l >> r;
		string tam = s.substr(l - 1, r - l + 1);
        string tmp=tam;
        reverse(tmp.begin(),tmp.end());
        if(tmp==tam)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
    //https://oj.luyencode.net/problem/PALINZ
    return 0;
}
