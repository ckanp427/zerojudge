#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y,a,b,c,d;
	cin>>a>>b>>c;
	d=pow(b,2)-4*a*c;
	x=(-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
	y=(-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);
	if(d>0){
		cout<<"Two different roots x1="<<x<<" , x2="<<y;
	}else if(d==0){
		cout<<"Two same roots x="<<x;
	}else{
		cout<<"No real root";
	}
}
