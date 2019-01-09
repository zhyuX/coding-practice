#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

void drawin(char a, int space){
	printf("\n%c",a);
	for(int i = 0; i < space; ++i){
		printf(" ");
	}
	printf("%c",a);
}

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	char a;
	cin>>n;
	cin>>a;
	int lines = round(n*0.5);
	for(int i = 0; i < n; ++i){
		printf("%c",a);
	}
	for(int i = 0; i < lines-2; ++i){
		drawin(a,n-2);
	}
	printf("\n");
	for(int i = 0; i < n; ++i){
		printf("%c",a);
	}
	
	return 0;
}
