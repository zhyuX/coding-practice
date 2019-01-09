#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
// 根据行数和字符打印沙漏 
void show(int line, char shape){
	//打印上半部分 + 中间 
	int half = line / 2;
	for(int i = 0; i < half+1; ++i){
		//打印空格
		for(int j = 0; j < i; ++j){
			cout<<" ";
		}
		//打印符号
		for(int j = 0; j < line-2*i; ++j){
			cout<<shape;
		} 
		cout<<endl;
	} 
	//打印下半部分
	for(int i = 0; i < half; ++i){
		//打印空格
		for(int j = 0; j < half-i-1; ++j){
			cout<<" ";
		} 
		//打印符号
		for(int j = 0; j < i*2+3; ++j){
			cout<<shape;
		} 
		cout<<endl;
	}
} 

int main(){
	//freopen("input.txt", "r", stdin);
	int n;
	char shape; 
	cin>>n;
	cin>>shape;
	// 计算行数
	int line =  1;
	int temp = 1;
	while(temp + (line+2)*2 <= n){
		line += 2;
		temp = temp + line*2;
	}
	int rest = n - temp;
	show(line,shape);
	cout<<rest;
	
	return 0;
}
