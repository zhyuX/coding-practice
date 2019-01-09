#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	string s;
//	getline(cin,s);
	stack<string> ss;
	while(cin>>s){
		ss.push(s);
	}
	int first = 1;
	while(!ss.empty()){
		if(first){
			cout<<ss.top();
			first = 0;
		}
		else{
			cout<<" "<<ss.top();
		}
		ss.pop();
	}

	return 0;
}
