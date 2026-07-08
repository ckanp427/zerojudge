#include<bits/stdc++.h>
using namespace std;

int main(){
	int i=0,diff=0;
	string s;
	cin>>s;
	
	while(s[i]!='\0'){
		if(i%2==0){
			diff+=(s[i]-'0');
		}else{
			diff-=(s[i]-'0');
		}
		i++;
	}
	cout<<abs(diff);
} 
