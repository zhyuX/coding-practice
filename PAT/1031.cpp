#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

bool check(string id){
	int weights [17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[11] = {'1','0','X', '9', '8','7','6', '5', '4','3','2'};
	int z = 0;
	for(int i = 0; i < 17; ++i){
		z += weights[i]*(id[i]-'0');
	}
	z = z % 11;
	return M[z] == id[17];
}

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	string id;
	int amount = 0;
	for(int i = 0 ; i < n ; ++i){
		cin>>id;
		if(check(id)==false){
			cout<<id<<endl;
			amount++;
		}
	}
	if(amount==0){
		cout<<"All passed";
	}
	
	return 0;
}
