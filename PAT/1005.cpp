#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
// 空间换时间 数据范围小，打表题 

int main() {
	freopen("input.txt", "r", stdin);
	int n,temp;
	cin>>n;
	int list[101]={0};
	// 标记为key 
	for(int i = 0; i < n; ++i){
		cin>>temp;
		list[temp]=1;
	}
	for(int i = 0; i < 101; ++i){
		temp = i;
		while(list[i] && temp>1){
			// 偶数 
			if(temp % 2 == 0){
				temp /= 2;
			}
			// 奇数
			else{
				temp = (temp*3+1)/2;
			}
			// 覆盖的数置0 
			if(temp<101){
				list[temp] = 0;
			}
		}
	} 
	// 输出
	int p = 100+1;	//这是个坑！ 不+1 就会漏掉100这个数 
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
