#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int t,k,bal=0;
	char s[40];
	cin>>t;
	while(t--){
		cin>>s;
		if(strcmp(s,"donate")==0){
			cin>>k;
			bal+=k;
		}
		else
			cout<<bal;
	}
	return 0;
}