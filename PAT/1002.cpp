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
	// ��������֮�� 
	for(i = 0; i < num.length(); ++i){
		sum += num[i] - '0';
	}
	// ���ܺ����ִ�������ѹ��ջ
	stack<int> s;
	while(sum > 0){
		s.push(sum%10);
		sum /= 10;
	}
	// ��ջ��� 
	while(s.size()>1){
		cout<<pinyin[s.top()]<<" ";
		s.pop();
	}
	cout<<pinyin[s.top()];

	return 0;
}
