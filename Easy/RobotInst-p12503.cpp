#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
	int t, pos[100] ,ans=0;
	cin>>t;
	char inst[20];
	while(t--){
		int n,x;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>inst;
			if(strcmp(inst,"LEFT")==0){
				pos[i] = -1;
				ans+=pos[i];
			}
			else if(strcmp(inst,"RIGHT")==0){
				pos[i] = 1;
				ans+=pos[i];
			}
			else if(strcmp(inst,"SAME")==0){
				cin>>inst>>x;
				pos[i]=pos[x];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}