#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c,n,ans=0;
	cin>>r>>c>>n;
	vector<int> A={4,4,1,1,1,1};
	vector<int> B={1,3,3};
	vector<int> C={2,4,2,2};
	vector<int> D={2,4,1,3};
	vector<int> E={3,5,1,2,2};
	vector<int> arr(r,0);
	int t=r*c,o2;
	char o1;
	for(int k=0;k<n;k++){
		int check=0,big=0;
		cin>>o1>>o2;
		vector<int>& x=(o1=='A')?A:(o1=='B')?B:(o1=='C')?C:(o1=='D')?D:E;
		if(o2+x[0]>r){
			ans++;
			continue;
		}
		for(int i=0;i<x[0];i++){
			if(arr[i+o2]+x[i+2]<=c){
				check++;
				big=max(big,arr[i+o2]+x[i+2]);
			}
		}if(check==x[0]){
			for(int i=0;i<x[0];i++) arr[i+o2]=big;
			t-=x[1];
		}else ans++;
	}cout<<t<<" "<<ans;
}
