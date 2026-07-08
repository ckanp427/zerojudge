#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,w1,w2,h1,h2,v,c=0,d,l=1,s=0;
	cin>>n>>w1>>w2>>h1>>h2;
	d=pow(w1,2);
	for(int i=0;i<n;i++){
		cin>>v;
		if(l==1){
			if(v<d*h1){
				c+=v/d;
				h1-=v/d;
			}else if(v>=d*h1){
				l=2;
				c+=h1;
				v-=d*h1;
				d=pow(w2,2);
			}
		}if(l==2 && v>0){
			if(v<d*h2){
				c+=v/d;
				h2-=v/d;
			}else if(v>=d*h2){
				c+=h2;
				v-=d*h2;
			}	
		}
		if(c>s){
			s=c;
		}
		c=0;
	}
	cout<<s;
}
