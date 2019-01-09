#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n,a,b;
	stack<int> stk;
	cin>>a>>b>>n;
	a = a + b;
	if(a==0){
		stk.push(0);
	}
	while(a > 0){
		stk.push(a%n);
		a /= n;
	}
	int cnt = stk.size();
	for(int i = 0; i < cnt; i++){
		cout<<stk.top();
		stk.pop(); 
	}


	return 0;
}
