#include<iostream>
#include<cstdio>
#include<string>
#include<stack>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	int n,num,temp;
	cin>>n;
	int a[5]={0};	//存放每个类的结果 
	int sign = 1; //用于B类 
	int amount = 0;
	int flag=0;
	for(int i = 0; i < n; ++i){
		cin>>num;
		temp = num % 5;
		switch(temp){
			case 0:
				if(num % 2 == 0){
					a[0] += num;
				}
				break;
			case 1:
				a[1] += sign*num;
				sign *= -1;
				flag = 1;
				break;
			case 2:
				a[2]++;
				break;
			case 3:
				a[3] += num;
				amount++;
				break;
			case 4:
				if(num > a[4])
					a[4] = num;
				break;
		}
	}
	//输出
	if(a[0]) printf("%d ",a[0]); else printf("%s ","N");
	if(flag) printf("%d ",a[1]); else printf("%s ","N"); 
	if(a[2]) printf("%d ",a[2]); else printf("%s ","N"); 
	if(a[3]) printf("%.1f ",1.0*a[3]/amount); else printf("%s ","N"); 
	if(a[4]) printf("%d",a[4]); else printf("%s","N"); 
	return 0;
}
