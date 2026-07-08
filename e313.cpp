#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,mc=30;
	string bs="";
	cin>>n;
	
	for(int j=0;j<n;j++){
		string s;
		int check[26]={0},kind=0;
		cin>>s;
		int size=s.length();
		
		for(int i=0;i<size;i++){
			check[s[i]-'A']=1;
		}
		for(int i=0;i<26;i++){
			kind+=check[i];
		}
		if(bs==""||kind<mc||(kind==mc&& s<bs)){
			bs=s;
			mc=kind;
		}
	}
	cout<<bs;
}
