#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

bool isPrime(int k){
	bool flag = true;
	for(int i = 2; i <= sqrt(k); ++i ){
		if(k % i == 0){
			flag = false;
			break;
		} 
	}
	return flag;
}

int main(){
	freopen("input.txt", "r", stdin);
	int n,m;
	cin>>m>>n;
	vector<int> primes;
	primes.push_back(2);
	int count = 1;
	for(int i = 3; i < 110000; i += 2){
		if(count >= n){
			break;
		}
		if(isPrime(i)){
			primes.push_back(i);
			++count;
		}
	}
	
	int flag = 1; //控制第一个输出 
	int cnt = 0;//控制换行 
	for(int i = m-1; i < n; ++i){
		if(flag){
			cout<<primes[i];
			flag = 0;
		}
		else{
			cout<<" "<<primes[i];
		}
		++cnt;
		if(cnt % 10 == 0){
			cout<<endl;
			flag = 1; 
		}
	}
	
	return 0;
}
