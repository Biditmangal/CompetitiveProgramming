#include<iostream>
using namespace std;

int main(){
	int start, first, second , third, ans;
	while(scanf("%d %d %d %d",&start,&first,&second,&third),start||first||second||third){
		ans = 1080;
		ans += (start-first)>0 ? (start-first)*9 : (start-first+40)*9;
		ans += (second-first)>0 ? (second-first)*9 : (second-first+40)*9;
		ans += (third-second)>0 ? (third-second)*9 : (third-second+40)*9;
		cout<<ans;
	}
	return 0;
}