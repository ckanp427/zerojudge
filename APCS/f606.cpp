#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,cost=INT_MAX,t=0;
	cin>>n>>m>>k;
	vector<vector<int>> arr(n,vector<int>(m));
	vector<int> c(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}for(int l=0;l<k;l++){
		for(int i=0;i<n;i++) cin>>c[i];
		vector<vector<int>> acc(m,vector<int>(m,0));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) acc[c[i]][j]+=arr[i][j];
		}for(int i=0;i<m;i++){
			for(int j=0;j<m;j++){
				if(i==j) t+=acc[i][j];
				else if(acc[i][j]<1000) t+=acc[i][j]*3;
				else t+=3000+(acc[i][j]-1000)*2;
			}
		}cost=min(cost,t);
		t=0;
	}cout<<cost;
}
