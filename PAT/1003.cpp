#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
/*规律，aPbTc,a b c代表若干个A，数量上要满足 a*b=c*/ 
int main() {
	freopen("input.txt", "r", stdin);
	int n;
	int p,t;
	string ss;
	cin>>n;
	while(n--){
		cin>>ss;
		p = ss.find('P',0);
		t = ss.find('T',0);
		if(p==string::npos || t==string::npos || p >= t-1){
			cout<<"NO"<<endl;
		}
		else{
			string a = ss.substr(0,p);
			string b = ss.substr(p+1, t-p-1);
			string c = ss.substr(t+1, ss.size()-t-1);
			string add = a+b+c;
			//全是A组成 
			if(add.find_first_not_of('A') == string::npos){
				if(a.size()*b.size()==c.size()){
					cout<<"YES"<<endl; 
				}
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			} 
		}
	}
	return 0; 
} 
