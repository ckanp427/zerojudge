#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,b;
	cin>>n>>m;
	vector<int> acc={5,1,3};
	vector<vector<int>> arr(n,acc);
	for(int i=0;i<m;i++){
		cin>>a>>b;
		if(b>0) for(int j=0;j<3;j++) swap(arr[a-1][j],arr[b-1][j]);
		else if(b==-1){
			swap(arr[a-1][1],arr[a-1][2]);
			arr[a-1][2]=7-arr[a-1][2];
		}else{
			swap(arr[a-1][1],arr[a-1][0]);
			arr[a-1][0]=7-arr[a-1][0];
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i][1]<<" ";
	}
}


