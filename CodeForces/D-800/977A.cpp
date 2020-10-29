#include <iostream>
using namespace std;

int main() {
    int num, n;
    cin>>num>>n;
    while(n>0){
        if(num%10==0){
            num=num/10;
        }
        else{
            num=num-1;
        }
        n--;
    }
    cout<<num;
    return 0;
}
