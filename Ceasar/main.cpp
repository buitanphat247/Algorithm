#include<bits/stdc++.h>
using namespace std;
string A = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
string B;
int k;

int main(){
	cin >> B >> k;
	for(int i=0; i<B.size(); i++){
		cout << A[B[i] - 'a' + 26 - k];
	}
	return 0;
	//https://oj.luyencode.net/problem/Ceasar
}
