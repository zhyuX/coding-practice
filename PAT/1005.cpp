#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
// �ռ任ʱ�� ���ݷ�ΧС������� 

int main() {
	freopen("input.txt", "r", stdin);
	int n,temp;
	cin>>n;
	int list[101]={0};
	// ���Ϊkey 
	for(int i = 0; i < n; ++i){
		cin>>temp;
		list[temp]=1;
	}
	for(int i = 0; i < 101; ++i){
		temp = i;
		while(list[i] && temp>1){
			// ż�� 
			if(temp % 2 == 0){
				temp /= 2;
			}
			// ����
			else{
				temp = (temp*3+1)/2;
			}
			// ���ǵ�����0 
			if(temp<101){
				list[temp] = 0;
			}
		}
	} 
	// ���
	int p = 100+1;	//���Ǹ��ӣ� ��+1 �ͻ�©��100����� 
	int first = 1;
	while(p--){
		if(list[p]){
			if(first){
				printf("%d",p);
				first = 0;
			}
			else{
				printf(" %d",p);
			}
		}

	}
	return 0; 
} 
