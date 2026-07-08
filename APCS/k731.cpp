#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r=0,l=0,b=0,z=1,z1,x1,x2,y1,y2;
	cin>>n;
	cin>>x1>>y1;
	for(int i=0;i<n-1;i++){
		cin>>x2>>y2;
		if((x2-x1)>0) z1=1;
		else if((x2-x1)<0) z1=3;
		else if((y2-y1)>0) z1=2;
		else if((y2-y1)<0) z1=4;
		
		if(abs(z1-z)==2) b+=1;
		else if((abs(z1-z)==1 && z1>z) || (abs(z1-z)==3 && z1<z)) l+=1;
		else if((abs(z1-z)==1 && z1<z) || (abs(z1-z)==3 && z1>z)) r+=1;
		z=z1;
		x1=x2;
		y1=y2;
	}
	cout<<l<<" "<<r<<" "<<b; 
}
