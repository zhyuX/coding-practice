#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int counts[10];
	for(int i = 0; i < 10; ++i){
		cin>>counts[i];
	}
	// find the min number
	int min_number = 1; 
	for(int i = 1; i < 10; ++i){
		if(counts[i]>0){
			min_number = i;
			break;
		}
	}
	int flag = 0; //���Ƶڶ�λ��ʼ���0�������0�Ļ���
	if(counts[0]>0){
		flag = 1;
	}
	for(int i = min_number; i < 10; ++i){
		if(counts[i]>0){
			cout<<i;
			--counts[i]; 
			//�ڶ�λ��ʼ���0 ֻ�е�һ��ִ�� 
			if(flag==1){
				for(int j = 0; j < counts[0]; ++j){
					cout<<0;
				}
			}
			flag = 0;
			while(counts[i]>0){
				cout<<i;
				--counts[i];
			}
		}
	}
	


	return 0;
}
