#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x1,x2,y1,y2,big=0,small=200,d;
	cin>>n;
	cin>>x1>>x2;
	for(int i=0;i<n-1;i++){
		cin>>y1>>y2;
		d=abs(x1-y1)+abs(x2-y2);
		x1=y1;
		x2=y2;
		if(d<small) small=d;
		if(d>big) big=d;
	}
	cout<<big<<" "<<small;
}
