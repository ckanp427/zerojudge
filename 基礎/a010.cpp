#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a; 
    c=a;
    for(int i=2;i<a+1;i++){
    	b=0;
    	while(a%i==0){
    		a/=i;
    		b++;
		}if(b==0){
			continue;
		}else if(a==1&&b>1||a==c&&b>1){
			cout<<i<<"^"<<b; 
		}else if(a==1||a==c){
			cout<<i;
		}else if(b==1){
			cout<<i<<" * ";
		}else{
			cout<<i<<"^"<<b<<" * ";
		} 
	}
}
