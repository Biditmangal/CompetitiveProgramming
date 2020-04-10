
#include <string>
#include <iostream>

using namespace std;

#define sp system("pause")
#define FOR(i,a,b) for(int i=a;i<=b;++i)

int a[100000];

int main(){

	int flag=0;
	string s,s1,s2,s3,s4,s5;
	cin>>s;
	cin>>s1>>s2>>s3>>s4>>s5;
	string arr[]={s1,s2,s3,s4,s5};
	
	FOR(i,0,4){
		if(s[0]==arr[i][0] || s[1]==arr[i][1])
			flag=1;
	}
	if(flag==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
