#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	char ch[10001];
	int i,flag=0;
	while( cin>>ch ){
		for(i=0;ch[i];i++){
			if(ch[i]=='\"'){
				if(!flag)
					printf("``");
				else
					printf("''");
				flag=1-flag;
			}
			else
				putchar(ch[i]);
		}
		puts("");
	}
	return 0;
}