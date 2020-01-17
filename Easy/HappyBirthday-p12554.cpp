#include <iostream>
#include <vector>
using namespace std;

int main(){
	char song[17][10] = {"Happy\0", "birthday\0", "to\0", "you\0","Happy\0", "birthday\0", "to\0", "you\0", "Happy\0", "birthday\0", "to\0", "Rujia\0","Happy\0", "birthday\0", "to\0", "you\0"};
	char family[100][200];
	int t,count,i,j,k;
	bool stop;

	cin>>t;
	
	for(i=0;i<t;i++){
		cin>>family[i];
	}
	if(t>16)
		count=t/16 + 1;
	else
		count=1;

	for(i=0,j=0,k=0 ;i<16*count;i++){
		if(!stop && k==16)
			k=0;
		cout<<family[j]<<": "<<song[k++]<<endl;
		j++;
		if(j==t){
			j=0;
			stop=true;
		}
	}
	return 0;
}