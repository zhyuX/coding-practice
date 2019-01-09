#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int n,bai,shi,ge;
	cin>>n;
	bai = n / 100;
	shi = n / 10 % 10;
	ge = n % 10;
	string b(bai,'B');
	string s(shi,'S');
	string number,temp;
	stringstream ss;
	for(int i = 1; i <= ge; ++i){
		ss<<i;
		ss>>temp;
		number = number + temp;
		ss.clear();
	}
	cout<<b<<s<<number;
	
	return 0;
}
