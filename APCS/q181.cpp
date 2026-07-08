#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, n, c,p,wait,t= 0;
	cin >> a >> b >> n;
	c= a+b;  
	for (int i=0;i<n;i++) {
		cin >>p;  
		wait=p%c-a;  
		if (wait<0)  
			wait=0;  
		else
			wait=b-wait;  
		t+=wait; 
	}
	cout<<t;
}
