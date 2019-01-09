#include<iostream>
#include<cstdio>
using namespace std;

void rightMove(int *list,int nn){
	int temp = list[nn-1];
	while(nn >= 1 && nn--){
		list[nn] = list[nn-1];
	}
	list[0] = temp;
}

int main(){
	freopen("input.txt", "r", stdin);
	int n,m;
	cin>>n>>m;
	m = m % n;
	int list[n];
	for(int i = 0; i < n; ++i){
		cin>>list[i];
	}
	for(int i = 0; i < m; ++i){
		rightMove(list,n);
	}
	//Êä³ö 
	int isfirst = 1;
	for(int i = 0; i < n; ++i){
		if(isfirst){
			cout<<list[i];
			isfirst = 0;
		}
		else
			cout<<" "<<list[i];
	}
	return 0;
}
