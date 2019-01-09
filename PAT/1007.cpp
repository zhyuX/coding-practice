#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int n,flag,now;
	int count = 0;
	int last = 2;
	cin>>n;
	for(int number = 3; number <= n; number += 2){
		flag = 1;
		for(int div = 3; div <= sqrt(number); div += 2){
			if(number % div == 0){
				flag = 0;
				break;
			}
		}
		// 如果是素数 
		if(flag){
			if(number-last==2){
				++count;
			}
			last = number;
		}
	}
	cout<<count;
	return 0;
}
