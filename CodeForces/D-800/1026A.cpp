#include <iostream>
#include <algorithm>
#include <array>
using namespace std;
 
int main() {
    int m, n;    
    cin>>m;
    int arr1[m];
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    cin>>n;
    int arr2[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    sort(arr1, arr1+m);
    sort(arr2, arr2+n);
    cout<<arr1[m-1]<<" "<<arr2[n-1];
	return 0;
}