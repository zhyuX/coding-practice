#include<iostream>
#include<cstdio>
#include<string>
#include<cctype>
#include<sstream>
using namespace std;

int str2int(string str){
	stringstream ss;
	int num;
	ss<<str;
	ss>>num;
	return num;
}

int main() {
	freopen("input.txt", "r", stdin);
	string s;
	cin>>s;	//+1.23400E-03
	int e = s.find('E');
	string s1 = s.substr(1,e-1);	//1.23400
	string s2 = s.substr(e+2,s.length()-e-1);	//03
	char sign1 = s[0];
	char sign2 = s[e+1];
	int num = str2int(s2);
	// 整数为 -
	if(sign1 == '-'){
		cout<<'-';
	} 
	// 指数为＋ 
	if(sign2 == '+'){
		int cnt = 0;
		cout<<s1[0];
		for(int i = 2; i < s1.length(); ++i){
			if(cnt == num){
				cout<<".";
			}
			cout<<s1[i];
			++cnt;
		}
		for(int i = 0; i < num - cnt; ++i){
			cout<<0;
		}
	}
	// 指数为 -
	else{
		num -= 1;
		cout<<"0.";
		while(num > 0){
			cout<<0;
			--num;
		}
		for(int i = 0; i < s1.length(); ++i){
			if(isdigit(s1[i])){
				cout<<s1[i];
			}
		}
		
	}
	
}
