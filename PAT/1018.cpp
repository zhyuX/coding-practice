#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int getNum(char c){
	if(c=='B')
		return 0;
	if(c=='C')
		return 1;
	if(c=='J')
		return 2;
}

char getMost(int win[3]){
	if(win[0]>=win[1] && win[0]>=win[2]){
		return 'B';
	}
	else if(win[1]>=win[2]){
		return 'C';
	}
	else{
		return 'J';
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	int draw; //只需要记录平局次数 
	int awin[3] = {0};	//1代表B布 2代表C锤子 3代表J剪刀 
	int bwin[3] = {0};
	char a,b;
	int na,nb;
	cin>>n;
	for(int i = 0; i < n; ++i){
		cin>>a>>b;
		na = getNum(a);
		nb = getNum(b);
		//a获胜的情况 
		if(na-nb == -1 || na-nb == 2){
			++awin[na];
		}
		else if(na != nb){
			++bwin[nb];
		}
	}
	int numAwin = awin[0]+awin[1]+awin[2];
	int numBwin = bwin[0]+bwin[1]+bwin[2];
	printf("%d %d %d\n",numAwin,n-numAwin-numBwin,numBwin);
	printf("%d %d %d\n",numBwin,n-numAwin-numBwin,numAwin);
	printf("%c %c",getMost(awin),getMost(bwin));
	return 0;
}
