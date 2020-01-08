#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t,i=0;
	char s[5];
	cin>>t;
	while (t--){
		cin>>s;
		if(strlen(s)==5)
			cout<<"3"<<endl;
		else if(s[0]=='o'|| s[1]=='n')
			cout<<"1"<<endl;
		else if (s[0]=='t'|| s[1]=='w')
			cout<<"2"<<endl;
		else
			break;
	}
	return 0;
}
