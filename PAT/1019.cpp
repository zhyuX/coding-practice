#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
//递减 
bool cmp(int x, int y){
	return x > y;
}

int getMax(int number){
	int num[4]={0};
	for(int i = 0; i <4; ++i){
		num[i] = number % 10;
		number /= 10;
	}
	sort(num,num+4,cmp);
	int result=0;
	for(int i = 0; i <4; ++i){
		result = result*10+num[i];
	}
	return result;
}

int getMin(int number){
	int num[4]={0};
	for(int i = 0; i <4; ++i){
		num[i] = number % 10;
		number /= 10;
	}
	sort(num,num+4);
	int result=0;
	for(int i = 0; i <4; ++i){
		result = result*10+num[i];
	}
	return result;
}

int main(){
	//freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	//特殊情况 四位都相等
	if(n % 1111 == 0){
		printf("%04d - %04d = %04d",n,n,0);
	}
	else{
		int max,min;
		int flag=1;
		while(n != 6174 || flag==1){
			max = getMax(n);
			min = getMin(n);
			n = max - min;
			printf("%04d - %04d = %04d\n",max,min,n);
			flag=0;
		}
	}
	
	
	return 0;
}
