#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

bool iswant(char a);
void show(char day, char hour, int minute);

int main(){
	freopen("input.txt", "r", stdin);
	string s1,s2,s3,s4;

	char day,hour;
	int minute = 0;
	
//	getline(cin,s1);
//	getline(cin,s2);
//	getline(cin,s3);
//	getline(cin,s4);
	cin>>s1>>s2>>s3>>s4;
	// 处理前两个字符串 
	int minLength = s1.size();
	if(minLength > s2.size()){
		minLength = s2.size();
	}
	int found = 0;
	for(int i = 0; i < minLength; ++i){
		if(s1[i] == s2[i]){
			// 如果是大写字母 
			if(found == 0 && (s1[i]>='A' && s1[i]<='G')){
				day = s1[i] ;
				++found;
				continue;
			}
			// 如果是大写字母或0-9
			if(found == 1 && iswant(s1[i])){
				hour = s1[i];
				++found;
				break;
			}
		}
	}
	// 处理后两个字符串
	minLength = s3.size();
	if(minLength > s4.size()){
		minLength = s4.size();
	}
	for(int i = 0; i < minLength; ++i){
		if(s3[i] == s4[i]){
			char temp = s3[i];
			// 如果相同且是字母 
			if((temp>='a'&&temp<='z') || (temp>='A'&&temp<='Z')){
				minute = i;
				break; // !!! cnm 这里坑死我 一定要跳出啊！ 
			}
		}
	}
	// 输出信息 
	show(day,hour,minute);
	
	return 0;
}

void show(char day, char hour, int minute){
	string days[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int dayIdx = day - 'A';
	int hourNum;
	cout<<days[dayIdx]<<" ";
	//输出 小时 
	if(hour >= 'A' && hour <='N'){
		hourNum = 10 + int(hour - 'A');
		cout<<hourNum<<':';
	}
	else{
		hourNum = int(hour - '0'); // cnm 坑啊！ 直接int是变成askii码 
		cout<<'0'<<hourNum<<':';
	}
	
	if(minute < 10){
		cout<<'0'<<minute;
	}
	else{
		cout<<minute;
	}
}

bool iswant(char a){
	if(a >= '0' && a <='9'){
		return true;
	}
	else if(a >= 'A' && a <='N'){
		return true;
	}
	else{
		return false;
	}
}
 
