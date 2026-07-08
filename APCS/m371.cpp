#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,c,t=0,x;
	cin>>n>>m;
	vector<vector<int>> arr(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}for(int l=0;l<n*m;l++){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				x=arr[i][j];
				if(x==-1) continue;
				if(i>0){
					c=i-1;
					while(c>0 && arr[c][j]==-1) c--;
					if(arr[c][j]==x){
						t+=x;
						arr[i][j]=arr[c][j]=-1;
						continue;
					}
				}if(j>0){
					c=j-1;
					while(c>0 && arr[i][c]==-1) c--;
					if(arr[i][c]==x){
						t+=x;
						arr[i][j]=arr[i][c]=-1;
						continue;
					}
				}
			}
		}
	}cout<<t;
}
