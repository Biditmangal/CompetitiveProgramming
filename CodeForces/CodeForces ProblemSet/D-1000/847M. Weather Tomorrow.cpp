#include <iostream>
using namespace std;

int main() {
	int n, first, diff, count=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	first = arr[0];
	diff = arr[1]-first;
	//cout<<"diff: "<<diff<<endl;
	if(n==2){
	    cout<<arr[1]+diff;
	}
	if(n>2){
	for(int i=1; i<n-1; i++){
	    if(diff==(arr[i+1]-arr[i])){
	        continue;
	    }
	    else{
	        count++;
	    }
	}
	//cout<<"count: "<<count<<endl;
	if(count==0)
	    cout<<arr[n-1]+diff;
	else
	    cout<<arr[n-1];
	}
	return 0;
}
