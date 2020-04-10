#include <iostream>
using namespace std;

int main(){
	int n,b,h,w,cost,nobeds,totalcost,temp,flag;
	while(true){
		cin>>n>>b>>h>>w;
		while(h--){
			cin>>cost;
			temp=w;
			while(temp--){
				cin>>nobeds;
				if(nobeds<n){
					flag=1;
				}
				else{
					totalcost=n*cost;
					if(totalcost<b)
						flag=totalcost;
					else
						flag=1;
				}
			}
		}
		if(flag==1)
				cout<<"stay home"<<endl;
			else
				cout<<flag<<endl;
		
		if(n==0)
			return 0;
	}
}