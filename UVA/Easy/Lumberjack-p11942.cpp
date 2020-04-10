#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Lumberjacks:"<<endl;
	cin>>t;
	while(t--){
		int beard,asc=1,desc=0,temp=0;
		for(int i=0;i<10;i++){
			cin>>beard;		
			if(beard>temp){
				desc++;
				temp=beard;
			}
			else if(beard<temp){
				asc++;
				temp=beard;
			}
		}	
		if(asc==10||desc==10)
			cout<<"Ordered"<<endl;
		else
			cout<<"Unordered"<<endl;
	}
	return 0;
}