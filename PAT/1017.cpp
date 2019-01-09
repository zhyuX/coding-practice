#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	string a;
	int b,r,temp=0;
	cin>>a>>b;
	int len = a.length();
	int flag = 1; // flag的值为1表示首位 
	for(int i = 0; i < len; ++i){
		r = temp*10 + (a[i]-'0');
		temp = r % b;
		r = r / b;
		if(r == 0 && flag==1){
			if(len==1){
				cout<<r;
			}
		}
		else{
			cout<<r;
		}
		flag = 0;
	}

	cout<<" "<<temp;
	return 0;
}
