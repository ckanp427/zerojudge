#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n,d,priceFirst,priceNext,priceNow,profit;
	profit=0;
	cin>>n>>d;
	bool gu;
	cin>>priceFirst;

	gu=true;
	for(int i=1;i<n;i++){
		cin>>priceNext;
		if(gu==true && priceNext>=(priceFirst+d)){
			gu=false;
		
			profit+=(priceNext-priceFirst);
				priceFirst=priceNext;
		}if(gu==false && priceNext<=(priceFirst-d)){
			gu=true;
			priceFirst=priceNext;
		}
	}
	cout<<profit;
}
