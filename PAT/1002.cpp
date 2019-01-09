#include<iostream>
#include<cstdio>
#include<string>
#include<stack> 
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	string num;
	string pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0;
	cin>>num;
	int i = 0;
	// 计算数字之和 
	for(i = 0; i < num.length(); ++i){
		sum += num[i] - '0';
	}
	// 将总和数字从右往左压入栈
	stack<int> s;
	while(sum > 0){
		s.push(sum%10);
		sum /= 10;
	}
	// 出栈输出 
	while(s.size()>1){
		cout<<pinyin[s.top()]<<" ";
		s.pop();
	}
	cout<<pinyin[s.top()];

	return 0;
}
