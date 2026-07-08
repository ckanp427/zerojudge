#include<bits/stdc++.h>
using namespace std;
int main(){
	int M,N,r,c,k,g=0,s=0,d=0;
	cin>>M>>N>>k>>r>>c;
	vector<vector<int>> arr(M,vector<int>(N));
	for(int i=0;i<M;i++)for(int j=0;j<N;j++) cin>>arr[i][j];
	while(1){
		bool turn=false;
		if(arr[r][c]==0) break;
		g++;
		s+=arr[r][c];
		arr[r][c]-=1;
		if(s%k==0) turn=true;
		while(1){
			if(d==0){
				if(turn||c==N-1||arr[r][c+1]==-1) d=1;
				else{
					c++;
					break;
				}
			}else if(d==1){
				if(turn||r==M-1||arr[r+1][c]==-1) d=2;
				else{
					r++;
					break;
				}
			}else if(d==2){
				if(turn||c==0||arr[r][c-1]==-1) d=3;
				else{
					c--;
					break;
				}
			}else if(d==3){
				if(turn||r==0||arr[r-1][c]==-1) d=0;
				else{
					r--;
					break;
				}
			}turn=false;
		}
	}cout<<g;
}
