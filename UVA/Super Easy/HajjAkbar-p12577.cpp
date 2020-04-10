#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int cnt=1;

	while(true){
		char s[6];
		cin>>s;
		if(strcmp(s,"Hajj")==0){
			cout<<"Case "<<cnt<<": Hajj-e-Akbar"<<endl;
			cnt++;
		}
		else if(strcmp(s,"Umrah")==0){
			cout<<"Case "<<cnt<<": Hajj-e-Asghar"<<endl;
			cnt++;
		}
		else if(strcmp(s,"*")==0)
			return 0;
	}
	return 0;
}