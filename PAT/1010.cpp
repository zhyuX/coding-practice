#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int flag = 1;
	int a,b;
	while(cin>>a>>b){
		if(b == 0){
			break;
		}
		else{
			if(flag){
				cout<<a*b<<" "<<b-1;
				flag = 0;
			}
			else{
				cout<<" "<<a*b<<" "<<b-1;
			}
		}
	}
	if(flag){
		cout<<"0 0";
	}
	return 0;
}
