#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c;
	bool sol = false;
	cin >> a >> b >> c;
	if((a&&b)==c && (sol=true)) cout<<"AND"<<"\n";
	if((a||b)==c&&(sol=true)) cout<<"OR"<<"\n";
	if((a&&!b||!a&&b)==c&&(sol=true)) cout<<"XOR"<<"\n";
	if(!sol) cout<<"IMPOSSIBLE"<<"\n";
	return 0;
}
