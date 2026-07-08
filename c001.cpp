#include<bits/stdc++.h> 
using namespace std;
int main()
{
	char c;    // 宣告變數用來存放字元
    cin >> c;  // 輸入字元
    if( ( c>='a') && (c <= 'z') )  // 判斷小寫字母
       cout << c << "是小寫字母" << endl;
    else
       cout << c << "不是小寫字母" << endl;
}
