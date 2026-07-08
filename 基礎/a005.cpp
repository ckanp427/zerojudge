#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,a,b,c,d;
	cin>>t;
	for(int i;i<t;i++){
		cin>>a>>b>>c>>d;
		if((b-a)==(c-b)){ 
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<(d+(b-a))<<endl;
		}else if((b%a)==(c%b)){
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<((d*(b/a)))<<endl;
		}
	}
}
