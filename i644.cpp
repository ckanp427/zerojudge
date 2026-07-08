#include<bits/stdc++.h>
using namespace std;

int main(void){
	int a[]={1,2,3,4,5,6,7,8};
	int count=0;
	bool first=true,safe;
	
	ios::sync_with_stdio(false);
	cout.tie(0);
	
	do{
		safe=true;
		for(int i=0;safe && i<8;i++){
			for(int j=i+1;safe && j<8;j++){
				if(abs(i-j) == abs(a[i]-a[j])) safe=false;
			}
		}
		if(safe){
			if(first) first=false;
			else cout<<endl;
			cout<<++count<<": ";
			for(int i=0;i<8;i++) cout<<a[i];
		}
	}while(next_permutation(a,a+8));
	
	return 0;
}
