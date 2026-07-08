#include<bits/stdc++.h>
using namespace std;

int main(){
	int p=0,k,x1,x2,y1,y2;
	cin>>k;
	cin>>x1>>y1;
	cin>>x2>>y2;
	while(k>0){
		p+=k;	
		if(p%x1 == 0) k-=y1;
		if(p%x2 == 0) k-=y2;
	}
	cout<<p;	
}
