#include<bits/stdc++.h>
using namespace std;
int main(){
	int H,W,N,r,c,t,x;
	cin>>H>>W>>N;
	vector<vector<int>> arr(H,vector<int>(W,0));
	for(int k=0;k<N;k++){
		cin>>r>>c>>t>>x;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(abs(i-r)+abs(j-c)<=t) arr[i][j]+=x;
			}
		}
	}for(int i=0;i<H;i++){
		for(int j=0;j<W;j++)cout<<arr[i][j]<<" ";
		cout<<endl;
	}
}
