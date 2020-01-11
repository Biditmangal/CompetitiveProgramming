#include <iostream>
using namespace std;

int main(){
	int t,j=1;
	cin>>t;
	while(j<=t){
		int stu;
		cin>>stu;
		int speed[stu]={0},maxspeed=0;

		for(int i =0;i<stu;i++)
			cin>>speed[i];
		for(int i=0;i<stu;i++){
			if(maxspeed<speed[i])
				maxspeed=speed[i];
		}
		cout<<"Case "<<j<<": "<<maxspeed<<endl;
		j++;
	}
	return 0;
}