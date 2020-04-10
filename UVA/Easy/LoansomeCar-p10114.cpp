#include<iostream>
using namespace std;

int main(){
	int mon,nrec,cmon=0;
	float dp=0,amt=0,rec[100]={0},iamt=0,mowe=0;
	while (true){
		cin>>mon>>dp>>amt>>nrec;
		int i=0;
		iamt = dp+amt;
		mowe=amt;
		if(mon<0||dp<0||amt<0||rec<0)
			return 0;
		else{
			while(i<nrec){
				cin>>cmon>>rec[cmon];
				i++;
			}
			float temp;
			for(i=0;i<100;i++){
				if(i==0)
					iamt -= iamt*(rec[i]);
				else{
					mowe -= (amt/mon);
					if(rec[i]==0)
						iamt -= iamt*(temp);
					else{
						iamt -= iamt*(rec[i]);
						temp = rec[i];
					}
				}
				if(mowe<iamt)
					break;
			}
			if(i==1||i==0)
				cout<<i<<" month"<<endl;
			else
				cout<<i<<" months"<<endl;
		}	
	}
	return 0;
}