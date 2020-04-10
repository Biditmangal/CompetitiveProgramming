#include <iostream>
using namespace std;

int sumofdigits(long long int num){
	int rem=0;
	static int ans;
	rem=num%10;
	num=num/10;
	ans+=rem;
	if(num!=0)
		return sumofdigits(num);
	else
		if(ans<10)
			return ans;
		else
			return sumofdigits(ans);
}

int main(){
	long long int num;
	int ans;
	while(cin>>num,num){
		cout<<sumofdigits(num)<<endl;
	}
	return 0;
}