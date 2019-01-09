#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	string str;
	cin>>str;
	int numbers[10] = {0};
	int temp;
	for(int i = 0; i < str.length(); ++i){
		temp = str[i] - '0';
		numbers[temp]++;
	}
	//Êä³ö
	for(int i = 0; i < 10; ++i){
		if(numbers[i]>0){
			printf("%d:%d\n",i,numbers[i]);
		}
	} 
	
	return 0;
}
