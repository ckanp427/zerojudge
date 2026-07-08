#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x=1,a=1;
	cin>>n;
	vector <int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1]){
			a+=1;
			if(a>x) x=a;
		}else{
			if(a>x) x=a;
			a=1;
		}
	}
	cout<<x;
}
