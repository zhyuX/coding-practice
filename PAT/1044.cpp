#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
using namespace std;

void earth2mars(int num){
	string low[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string high[12] = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int h,l;
	l = num % 13;
	h = num / 13;
	if(h>0){
		cout<<high[h-1];
		if(l>0) cout<<" "; 
		if(l==0) cout<<endl;
	}
	if(l>0){
		cout<<low[l]<<endl;
	}
	if(num==0){
		cout<<low[0]<<endl;
	}
}

void mars2earth(string s){
	string low[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string high[12] = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	
	if(s.length()>4){
		string s1,s2;
		int n1,n2;
		s1 = s.substr(0,3);
		s2 = s.substr(4,3);
		for(int i = 0; i < 12; ++i){
			if(s1==(high[i])){
				n1 = (i+1)*13;
				break;
			}
		}
		for(int i = 0; i < 13; ++i){
			if(s2==(low[i])){
				n2 = i;
				break;
			}
		}
		printf("%d\n",n1+n2);
	}else{
		int n; 
		//如果是单个高位 
		for(int i = 0; i < 12; ++i){
			if(s==(high[i])){
				n = 13*(i+1);
				printf("%d\n",n);
				return ;
			}
		}
		//单个低位 
		for(int i = 0; i < 13; ++i){
			if(s==low[i]){
				n = i;
				break;
			}
		}
		printf("%d\n",n);
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	string temp;
	stringstream ss;
	int num;
	getchar();
	for(int i = 0; i < n; ++i){
		getline(cin,temp);
		//若是数字
		if(temp[0] >= '0' && temp[0] <= '9'){
			ss.clear();
			ss<<temp;
			ss>>num;
			earth2mars(num);
		}
		//若是火星文
		else{
			mars2earth(temp);
		}
	}
	
	return 0;
}
