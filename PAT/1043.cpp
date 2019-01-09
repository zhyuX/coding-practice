#include<iostream>
#include<cstdio>
#include<string>
using namespace std;


int main(){
	freopen("input.txt", "r", stdin);
	string s;
	getline(cin,s);
	int patest[6] = {0};
	for(int i = 0; i < s.length(); ++i){
		switch(s[i]){
			case 'P': ++patest[0]; break;
			case 'A': ++patest[1]; break; 
			case 'T': ++patest[2]; break; 
			case 'e': ++patest[3]; break; 
			case 's': ++patest[4]; break; 
			case 't': ++patest[5]; break; 
			default: break;
		}
	}
	int cnt = patest[0] + patest[1] + patest[2] + patest[3] + patest[4] + patest[5];
	//Êä³ö
	while(cnt>0){
		if(patest[0]>0){
			printf("%c",'P');
			--patest[0];
			--cnt;
		}
		if(patest[1]>0){
			printf("%c",'A');
			--patest[1];
			--cnt;
		}
		if(patest[2]>0){
			printf("%c",'T');
			--patest[2];
			--cnt;
		}
		if(patest[3]>0){
			printf("%c",'e');
			--patest[3];
			--cnt;
		}
		if(patest[4]>0){
			printf("%c",'s');
			--patest[4];
			--cnt;
		}
		if(patest[5]>0){
			printf("%c",'t');
			--patest[5];
			--cnt;
		}
	}
	
	return 0;
}
