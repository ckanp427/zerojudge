#include <bits/stdc++.h>
using namespace std;

int main(){
	int size,low=-1,best=-1;
	cin>>size;
	vector<int> container(size);
	for(int i=0;i<size;i++){
		cin>>container[i];
	}
	sort(container.begin(),container.end(),less<int>());
	for(int l=0;l<size;l++){
		cout<<container[l]<<" ";
	}cout<<endl;
	for(int j=0;j<size;j++){
		if(container[j]<60){
			best=container[j];
		}else{
			low=container[j];
			break;
		}
	}
	if(best==-1){
		cout<<"best case"<<endl;
	}else{
		cout<<best<<endl;
	}if(low==-1){
		cout<<"worst case"<<endl;
	}else{
		cout<<low;
	}
}
