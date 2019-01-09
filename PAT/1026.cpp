#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int c1,c2;
	cin>>c1>>c2;
	int result = round((c2-c1)/100.0);
	int h,m,s;
	s = result % 60;
	m = result / 60 % 60;
	h = result /3600;
	printf("%02d:%02d:%02d",h,m,s);
	
	return 0;
}
