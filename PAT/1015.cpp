#include<iostream>
#include<cstdio>
#include <algorithm>
#include<vector>
using namespace std;

class Student{
public:
	int id;
	int de;
	int cai;
	Student(int id, int de, int cai){
		this->id = id;
		this->de = de;
		this->cai = cai;
	}
};

bool comp(Student s1, Student s2){
	int score1 = s1.de + s1.cai;
	int score2 = s2.de + s2.cai;
	if(score1 == score2){
		if(s1.de == s2.de){
			return s1.id < s2.id;
		}
		else{
			return s1.de > s2.de;
		}
	}
	else{
		return score1 > score2;
	}
}

void show(vector<Student> s){

	for(int i = 0; i < s.size(); ++i){
//			cout<<s[i].id<<" "<<s[i].de<<" "<<s[i].cai<<endl;
		printf("%d %d %d\n",s[i].id,s[i].de,s[i].cai);
	}	

} 

int main(){
	freopen("input.txt", "r", stdin);
	int n,low,high;
	int id,de,cai;
	cin>>n>>low>>high;
	vector<Student> first,second,third,fourth;
	Student temp(0,0,0);
	while(n--){
		cin>>id>>de>>cai;
		temp = Student(id,de,cai);
		if(de >= high && cai >= high){
			first.push_back(temp);
		}
		else if(de >= high && cai >= low){
			second.push_back(temp);
		}
		else if(de >= cai && cai >= low){
			third.push_back(temp);
		}
		else if(de >= low && cai>= low){
			fourth.push_back(temp);
		}
	}
	// ÅÅÐò
	sort(first.begin(),first.end(),comp);
	sort(second.begin(),second.end(),comp);
	sort(third.begin(),third.end(),comp);
	sort(fourth.begin(),fourth.end(),comp);
	//Êä³ö 
	cout<<first.size()+second.size()+third.size()+fourth.size()<<endl;
	show(first);
	show(second);
	show(third);
	show(fourth;
	
	return 0;
}
