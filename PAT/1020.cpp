#include<iostream>
#include<cstdio>
#include <algorithm>
#include<vector>
using namespace std;

class MoonCake{
public:
	double store;
	double totalPrice;
};

bool cmp(const MoonCake &x, const MoonCake &y){
	return 1.0*x.totalPrice/x.store > 1.0*y.totalPrice/y.store;
}

int main(){
	freopen("input.txt", "r", stdin);
	int n,d;	//n种月饼 d需求量 
	cin>>n>>d;
	vector<MoonCake> mc(n);
	for(int i = 0; i < n; ++i){
		cin>>mc[i].store;
	}
	for(int i = 0; i < n; ++i){
		cin>>mc[i].totalPrice;
	}
	sort(mc.begin(),mc.end(),cmp);
	//开始解决需求
	double income = 0.0;
	for(int i = 0; d > 0 && i < n; ++i){
		if(mc[i].store <= d){
			income += mc[i].totalPrice;
			d -= mc[i].store;
		}
		else{
			income += 1.0*mc[i].totalPrice/mc[i].store*d;
			d = 0;
		}
	}
	printf("%.2f",income);
	return 0;
}
