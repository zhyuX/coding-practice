#include<iostream>
using namespace std;

int main(){
	int step = 0, n;
	cin>>n;
	while(n>1){
		if(n % 2 == 0){
			n /= 2;
		}
		else{
			n = (3*n+1)/2;
		}
		++step;
	}
	printf("%d",step);
	return 0;
} 
