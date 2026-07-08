#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,max=INT_MAX,x,y,t=0,d;
	cin>>n>>m;
	vector<vector<int>> arr(n,vector<int>(m));
	for(int i=0;i<n;i++)for(int j=0;j<m;j++){
		cin>>arr[i][j];
		if(arr[i][j]<max){
			x=i;
			y=j;
			max=arr[i][j];
		}
	}t+=arr[x][y];
	arr[x][y]=-1;
	while(1){
		max=INT_MAX;
		bool g=0;
		if(x!=0 && arr[x-1][y]<max && arr[x-1][y]>-1){
			d=0;
			g=1;
			max=arr[x-1][y];
		}if(x!=n-1 && arr[x+1][y]<max && arr[x+1][y]>-1){
			d=1;
			g=1;
			max=arr[x+1][y];
		}if(y!=0 && arr[x][y-1]<max && arr[x][y-1]>-1){
			d=2;
			g=1;
			max=arr[x][y-1];
		}if(y!=m-1 && arr[x][y+1]<max && arr[x][y+1]>-1){
			d=3;
			g=1;
			max=arr[x][y+1];
		}if(!g) break;
		d==0?x--:(d==1?x++:(d==2?y--:y++));
		t+=arr[x][y];
		arr[x][y]=-1;
	}cout<<t;
}
