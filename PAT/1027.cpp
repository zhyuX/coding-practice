#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
// �����������ַ���ӡɳ© 
void show(int line, char shape){
	//��ӡ�ϰ벿�� + �м� 
	int half = line / 2;
	for(int i = 0; i < half+1; ++i){
		//��ӡ�ո�
		for(int j = 0; j < i; ++j){
			cout<<" ";
		}
		//��ӡ����
		for(int j = 0; j < line-2*i; ++j){
			cout<<shape;
		} 
		cout<<endl;
	} 
	//��ӡ�°벿��
	for(int i = 0; i < half; ++i){
		//��ӡ�ո�
		for(int j = 0; j < half-i-1; ++j){
			cout<<" ";
		} 
		//��ӡ����
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
	// ��������
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
