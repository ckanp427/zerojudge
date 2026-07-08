#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    string s1;
    getline(cin,s1);
    z=s1.size();
    for(int i=0;i<z;i++){
        x=s1.find("EFG",0);
        s1.erase(x,3);
        s1.insert(x,"efgh");
        y=s1.find("ijkl",0);
        s1.erase(y,4);
        s1.insert(y,"IJK");
    }
    cout<<s1<<endl;
}
