#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,n,t;
	cin>>x>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	n+=1;
	arr.push_back(x);
	sort(arr.begin(),arr.end());
	t=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
	if(n-t-1>t){
		cout<<n-t-1<<" "<<arr[n-1];
	}else cout<<t<<" "<<arr[0];
}
