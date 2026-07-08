#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t=1;
	int arr[2][7];
	cin>>n;
	for(int j=0;j<n;j++){
		for(int i=0;i<2;i++){
			for(int k=0;k<7;k++){
				cin>>arr[i][k];
			}
		}
		if(arr[0][1]==arr[0][3] || arr[0][1]!=arr[0][5] || arr[1][1]==arr[1][3] || arr[1][1]!=arr[1][5]){
			cout<<"A";
			t=2;
		}if(arr[0][6]==0 || arr[1][6]==1){
			cout<<"B";
			t=2;
		}if(arr[0][1]==arr[1][1] || arr[0][3]==arr[1][3] || arr[0][5]==arr[1][5]){
			cout<<"C";
			t=2;
		}if(t==1){
			cout<<"None";
		}
		cout<<endl;
		t=1;
	}
}
