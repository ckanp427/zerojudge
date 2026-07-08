#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long b,long long p,long long m){
	if(p==0) return 1%m;
	long long res=bigmod(b,p/2,m);
	res=(res*res)%m;
	if(p%2==1) res=(res*(b%m))%m;
	return res;
}int main(){
	long long b,p,m;	
	while(cin>>b>>p>>m){
		cout<<bigmod(b,p,m)<<endl;
	}
}
