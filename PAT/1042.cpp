#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

bool isUZM(char a){
	if(a>='A' && a<='Z'){
		return true;
	}
	else
		return false;
}

bool isLZM(char a){
	if(a>='a' && a<='z'){
		return true;
	}
	else
		return false;
}

int main(){
	freopen("input.txt", "r", stdin);
	string str;
	getline(cin,str);
	int zm[26]={0};
	int temp;
	for(int i = 0; i < str.length(); ++i){
		if(isUZM(str[i])){
			temp = str[i] - 'A';
			zm[temp]++;
		}
		if(isLZM(str[i])){
			temp = str[i] - 'a';
			zm[temp]++;
		}
	}
	//寻找次数最多的
	int maxIdx=0;
	int max = zm[0];
	for(int i = 1; i < 26; ++i){
		if(zm[i] > max){
			max = zm[i];
			maxIdx = i;
		}
	}
	printf("%c %d",'a'+maxIdx,max);
	
	return 0;
}
