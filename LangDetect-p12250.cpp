#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int i = 1;
	char s[20];

	while(true){
		cin>>s;
		if(strcmp(s,"#")==0) 
			return 0;

		cout<<"Case "<<i++<<": ";
		if(strcmp(s,"HELLO")==0)
			cout<<"ENGLISH"<<endl;
		else if(strcmp(s,"HOLA")==0)
			cout<<"SPANISH"<<endl;
		else if(strcmp(s,"HALLO")==0)
			cout<<"GERMAN"<<endl;
		else if(strcmp(s,"BONJOUR")==0)
			cout<<"FRENCH"<<endl;
		else if(strcmp(s,"CIAO")==0)
			cout<<"ITALIAN"<<endl;
		else if(strcmp(s,"ZDRAVSTVUJTE")==0)
			cout<<"RUSSIAN"<<endl;
		else
			cout<<"UNKNOWN"<<endl;
	}
	return 0;
}