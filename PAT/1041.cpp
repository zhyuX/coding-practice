#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class Student{
public:
	string id;
	int trynum;
	int testnum;
};

int main(){
	freopen("input.txt", "r", stdin);
	int n;
	cin>>n;
	Student sts[n];
	for(int i = 0; i < n; ++i){
		cin>>sts[i].id>>sts[i].trynum>>sts[i].testnum;
	}
	int p;	//²éÑ¯ÈËÊý 
	cin>>p;
	int temp;
	for(int i = 0; i < p; ++i){
		cin>>temp;
		for(int j = 0; j < n; ++j){
			if(sts[j].trynum==temp){
				cout<<sts[j].id<<" "<<sts[j].testnum<<endl;
				break;
			}
		}
	}
	
	return 0;
}
