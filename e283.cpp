#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	cout.tie();
	
	map<string,char>m;
	m["0 1 0 1"]='A';
	m["0 1 1 1"]='B';
	m["0 0 1 0"]='C';
	m["1 1 0 1"]='D';
	m["1 0 0 0"]='E';
	m["1 1 0 0"]='F';
	
	long long n;
	string s;
	
	while(cin>>n){
		cin.ignore();
		for(int i=0;i<n;i++){
			getline(cin,s);
			cout<<m[s];
		}
		cout<<endl;
	}
}
