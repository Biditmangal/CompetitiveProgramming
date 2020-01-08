#include <iostream>
using namespace std;

int main(){
	int t,l,w,h,i=1;
	cin>>t;
	while (i<=t){
		cin>>l>>w>>h;
		if(l>20||w>20||h>20)
			cout<<"Case "<<i<<": bad"<<endl;
		else 
			cout<<"Case "<<i<<": good"<<endl;		
		i++;
	}
	return 0;
}