#include<bits/stdc++.h>
using namespace std;

int main(){
	vector <int> arr(3);
	for(int i=0;i<3;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end(),greater<int>());
	if(arr[0] == arr[1] && arr[1] == arr[2]){
		cout<<"3 "<<arr[0];
	}else if(arr[0] == arr[1] || arr[1] == arr[2]){
		arr.erase(arr.begin()+1);
		cout<<"2 ";
		for(int i=0;i<2;i++){
			cout<<arr[i]<<" ";
		}
	}else{
		cout<<"1 ";
		for(int i=0;i<3;i++){
			cout<<arr[i]<<" ";
		}	
	}
}
