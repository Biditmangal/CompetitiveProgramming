#include <iostream>
using namespace std;

int main() {
	char square[4][4];
	int i,j, count=0;
	for(i=0; i<4; i++){
	    for(j=0; j<4; j++){
	        cin>>square[i][j];
	    }
	}
	for(i=0; i<3; i++){
	    for(j=0; j<3; j++){
	        if(square[i][j]=='.' && square[i][j+1]=='.' && square[i+1][j]=='.' && square[i+1][j+1]=='.'){
	            count++;
	            break;
	        }
	        if(square[i][j]=='#' && square[i][j+1]=='#' && square[i+1][j]=='#' && square[i+1][j+1]=='#'){
	            count++;
	            break;
	        }
	        if((square[i][j]=='.' && square[i][j+1]=='.' && square[i+1][j]=='.')||(square[i][j]=='#' && square[i][j+1]=='#' && square[i+1][j]=='#'))
	            count++;
	        if((square[i][j+1]=='.' && square[i+1][j]=='.' && square[i+1][j+1]=='.')||(square[i][j+1]=='#' && square[i+1][j]=='#' && square[i+1][j+1]=='#'))
	            count++;
	        if((square[i+1][j]=='.' && square[i+1][j+1]=='.' && square[i][j]=='.')||(square[i+1][j]=='#' && square[i+1][j+1]=='#' && square[i][j]=='#'))
	            count++;
	        if((square[i][j+1]=='.' && square[i+1][j+1]=='.' && square[i][j]=='.')||(square[i][j+1]=='#' && square[i+1][j+1]=='#' && square[i][j]=='#'))
	            count++;
	    }
	    if(count>0){
	        cout<<"YES"<<endl;
	        break;
	    }
	}
	if(count==0)
	    cout<<"NO"<<endl;
	return 0;
}
