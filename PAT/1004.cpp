#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	int score[n];
	string name[n];
	string id[n];
	int max=0,min=100,maxIdx,minIdx;
	for(int i = 0; i < n; ++i){
		cin>>name[i]>>id[i]>>score[i];
		if(score[i] > max){
			max = score[i];
			maxIdx = i;
		}
		if(score[i] < min){
			min = score[i];
			minIdx = i;
		}
	}
	cout<<name[maxIdx]<<" "<<id[maxIdx]<<endl;
	cout<<name[minIdx]<<" "<<id[minIdx];
	
	return 0;
}
