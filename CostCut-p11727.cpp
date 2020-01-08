#include<iostream>
using namespace std;

int main(){
	int i=1,t,a,b,c;
	cin>>t;
	while(i<=t){
		cin>>a>>b>>c;
	  	if((a>b&&a<c)||(c<a&&a<b))
        	cout<<"Case "<<i<<": "<<a;
        if((b>a&&b<c)||(c<b&&b<a))
        	cout<<"Case "<<i<<": "<<b;
        if((c>a&&b>c)||(c>b&&a>c))
			cout<<"Case "<<i<<": "<<c;
		i++;
	}
	return 0;
}