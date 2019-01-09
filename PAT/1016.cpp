#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int a,d;
	int pa,pb;
	for(int i = 0; i < 2; ++i){
		cin>>a>>d;
		int base = 0;
		while(a>0){
			if(a%10==d){
				base = base*10 + 1;
			}
			a /= 10;
		}
		if(i == 0){
			pa = base * d;
		}
		else{
			pb = base * d;
		}
	}
	cout<<pa+pb;
	return 0;
}
