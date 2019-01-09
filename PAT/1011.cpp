#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	long a,b,c;
	cin>>n;
	for(int i = 1; i <=n ; ++i){
		cin>>a>>b>>c;
		if((a+b)>c){
			printf("Case #%d: true\n",i);
		}
		else{
			printf("Case #%d: false\n",i);
		}
	}

	return 0;
}
