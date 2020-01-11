#include <iostream>
using namespace std;

int main(){
	int b,n,reserve[30],d,c,v;
	while(cin>>b>>n,b && n ){
		for(int i=1;i<=b;i++)
			cin>>reserve[i];
		for(int i=0;i<n;i++){
			cin>>d>>c>>v;
			reserve[d]-=v;
			reserve[c]+=v;
		}
		bool flag=false;

		for(int i=1;i<=b;i++){
			if(reserve[i]<0){
				flag=true;
				break;
			}
		}
		if(flag)
			cout<<"N"<<endl;
		else
			cout<<"S"<<endl;
	}
}