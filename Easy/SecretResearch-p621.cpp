#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int t,len;
	char s[100];
	cin>>t;
	while(t--){
		cin>>s;
		len=strlen(s);
		if(strcmp(s,"1")==0 || strcmp(s,"4")==0 || strcmp(s,"78")==0)
			cout<<"+"<<endl;
		else if(s[len-2]=='3' && s[len-1]=='5')
			cout<<"-"<<endl;
		else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
			cout<<"?"<<endl;
		else if(s[0]=='9' && s[len-1]=='4')
			cout<<"*"<<endl;
		else
			cout<<"+"<<endl;
	}
	return 0;
}