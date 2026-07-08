#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d,a,b,c,s=0,m=0,k,t;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		k=max({a,b,c});
		t=min({a,b,c});
		if((k-t)>=d){
			s+=1;
			m+=((a+b+c)/3);
		}
		
	}
	cout<<s<<" "<<m;
}
