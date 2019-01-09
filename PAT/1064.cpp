#include<iostream>
#include<cstdio>
using namespace std;

int getFriendId(int number) {
	int result = 0;
	while (number > 0)
	{
		result += number % 10;
		number /= 10;
	}
	return result;
}

int main() {
	freopen("C:\\Users\\think\\Desktop\\test.txt", "r", stdin);
	int n,temp;
	cin >> n;
	int ids[37] = { 0 };
	while (n--)
	{
		cin >> temp;
		ids[getFriendId(temp)]++;
	}
	int flag = 1;//第一个输出
	int count = 0;
	for (int i = 0; i < 37; i++) {
		if (ids[i] >=1) {
			count++;
		}
	}
	printf("%d\n", count);
	for (int i = 0; i < 37; i++)
	{
		if (ids[i] >= 1) {
			if (flag == 1) {
				printf("%d", i);
				flag = 0;
			}
			else
			{
				printf(" %d", i);
			}
		}
	}

	return 0;
}